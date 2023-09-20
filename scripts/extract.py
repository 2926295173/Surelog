#!/usr/bin/env python3

"""
Script to extract log and/or UHDM DBs out from artifacts generated by CI builds.
NOTE: CI artifacts are hierarhical tarballs i.e. tarball within tarball within tarball.
"""

import argparse
import multiprocessing
import os
import pprint
import re
import shutil
import sys
import tarfile
import time
import zipfile

from datetime import datetime
from enum import Enum, unique
from pathlib import Path
from threading import Lock


_default_dbname = 'surelog.uhdm'
_platform_ids = ['', '.linux', '.osx', '.msys', '.win']


_log_mutex = Lock()
def log(text, end='\n'):
  _log_mutex.acquire()
  try:
    print(text, end=end, flush=True)
  finally:
    _log_mutex.release()


@unique
class Status(Enum):
  PASS = 0
  FAIL = -1
  NULL = -2

  def __str__(self):
    return str(self.name)


def _mkdir(dirpath, retries=10):
  count = 0
  while count < retries:
    os.makedirs(dirpath, exist_ok=True)

    if os.path.exists(dirpath):
      return True

    count += 1
    time.sleep(0.1)

  return os.path.exists(dirpath)


def _rmdir(dirpath, retries=10):
  count = 0
  while count < retries:
    shutil.rmtree(dirpath, ignore_errors=True)

    if not os.path.exists(dirpath):
      return True

    count += 1
    time.sleep(0.1)

  shutil.rmtree(dirpath)
  return not os.path.exists(dirpath)


def _is_filtered(name, filters):
  if not filters:
    return True

  for filter in filters:
    if isinstance(filter, str):
      if filter.lower() == name.lower():
        return True
    else:
      if filter.search(name):  # Note: match() reports success only if the match is at index 0
        return True

  return False


def _extract_worker(params):
  zip_filepath, output_dirpath, modes, filters = params
  archive_name = Path(zip_filepath).stem

  results = {}
  with zipfile.ZipFile(zip_filepath, 'r') as zipfile_strm:
    with zipfile_strm.open(f'{archive_name}.tar.gz') as tarfile_strm:
      with tarfile.open(fileobj=tarfile_strm) as archive_strm:
        for test_archive_path in archive_strm.getnames():
          test_archive_name = Path(Path(test_archive_path).stem).stem

          if not _is_filtered(test_archive_name, filters):
            continue

          dst_dirpath = os.path.join(output_dirpath, test_archive_name)
          _mkdir(dst_dirpath)

          results[test_archive_name] = {mode: Status.NULL for mode in modes}

          with tarfile.open(fileobj=archive_strm.extractfile(test_archive_path)) as test_archive_strm:
            if 'db' in modes:
              for slpp in ['slpp_all', 'slpp_unit']:
                src_filepath = f'{test_archive_name}/{slpp}/{_default_dbname}'

                if src_filepath in test_archive_strm.getnames():
                  dst_filepath = os.path.join(dst_dirpath, _default_dbname)

                  try:
                    src_strm = test_archive_strm.extractfile(src_filepath)

                    with open(dst_filepath, 'wb') as dst_strm:
                      dst_strm.write(src_strm.read())
                      dst_strm.flush()

                    if results[test_archive_name]['db'] == Status.NULL:
                      results[test_archive_name]['db'] = Status.PASS
                  except Exception:
                    results[test_archive_name]['db'] = Status.FAIL

                  break

            if 'log' in modes:
              for platform_id in _platform_ids:
                src_filepath = f'{test_archive_name}/{test_archive_name}{platform_id}.log'

                if src_filepath in test_archive_strm.getnames():
                  dst_filepath = os.path.join(dst_dirpath, f'{test_archive_name}{platform_id}.log')

                  try:
                    src_strm = test_archive_strm.extractfile(src_filepath)

                    with open(dst_filepath, 'wb') as dst_strm:
                      dst_strm.write(src_strm.read())
                      dst_strm.flush()

                    if results[test_archive_name]['log'] == Status.NULL:
                      results[test_archive_name]['log'] = Status.PASS
                  except Exception:
                    results[test_archive_name]['log'] = Status.FAIL

  return results


def _main():
  start_dt = datetime.now()
  print(f'Starting CI artifact extraction @ {str(start_dt)}')

  parser = argparse.ArgumentParser()
  parser.add_argument('modes', nargs='+', choices=['db', 'log'], type=str, help='Pick what to extract from available choices')
  parser.add_argument('--build-no', dest='build_no', required=True, type=int, help='CI build no.')
  parser.add_argument('--archive-filename-pattern', dest='archive_filename_pattern', required=False, type=str,
                      default='sl-{}-linux-gcc-release-regression-{}.zip', help='Archive filepath pattern (with extension).')
  parser.add_argument('--shards', dest='shards', nargs='+', type=int,
                      default=[0, 1, 2, 3, 4, 5], help='List of shards to extract')
  parser.add_argument(
      '--input-dirpath', dest='input_dirpath', required=False, type=str,
      help='Input directory path to find the artifacts.')
  parser.add_argument(
      '--output-dirpath', dest='output_dirpath', required=False, type=str,
      help='Output directory path to extract to.')
  parser.add_argument(
      '--filters', nargs='+', required=False, default=[], type=str, help='Filter tests matching these regex inputs')
  parser.add_argument(
      '--jobs', nargs='?', required=False, default=multiprocessing.cpu_count(), type=int,
      help='Run tests in parallel, optionally providing max number of concurrent processes. Set 0 to run sequentially.')
  args = parser.parse_args()

  args.modes = sorted(set(args.modes))
  args.shards = sorted(set(args.shards))

  if not os.path.isabs(args.input_dirpath):
    args.input_dirpath = os.getcwd()
  args.input_dirpath = os.path.abspath(args.input_dirpath)

  if not os.path.isabs(args.output_dirpath):
    args.output_dirpath = os.getcwd()
  args.output_dirpath = os.path.abspath(args.output_dirpath)

  if args.filters:
    filters = set()
    for filter in args.filters:
      if filter.startswith('@'):
        with open(filter[1:], 'rt') as strm:
          for line in strm:
            line = line.strip()
            if line:
              filters.add(line)
      else:
        filters.add(filter)
    args.filters = filters

  args.filters = [text if text.isalnum() else re.compile(text, re.IGNORECASE) for text in args.filters]

  if (args.jobs == None) or (args.jobs > multiprocessing.cpu_count()):
    args.jobs = multiprocessing.cpu_count()


  print( 'Environment:')
  print(f'            command-line: {" ".join(sys.argv)}')
  print(f'         current-dirpath: {os.getcwd()}')
  print(f'                build-no: {args.build_no}')
  print(f'archive-filename-pattern: {args.archive_filename_pattern}')
  print(f'                  shards: {args.shards}')
  print(f'           input-dirpath: {args.input_dirpath}')
  print(f'          output-dirpath: {args.output_dirpath}')
  print(f'                 filters: {args.filters}')
  print(f'                    jobs: {args.jobs}')
  print( '\n\n')

  _mkdir(args.output_dirpath)

  params = [(
    os.path.join(args.input_dirpath, args.archive_filename_pattern.format(args.build_no, shard)),
    args.output_dirpath,
    args.modes, args.filters
  ) for shard in args.shards]

  jobs = min(args.jobs, len(params))

  if jobs <= 1:
    results = [_extract_worker(param) for param in params]
  else:
    with multiprocessing.Pool(processes=jobs) as pool:
      results = pool.map(_extract_worker, params)

  def _test_failed(v: dict):
    return sum(0 if s == Status.PASS else 1 for s in v.values()) != 0

  results = {k: v for result in results for k, v in result.items()}
  failures = {k: v for k, v in results.items() if _test_failed(v)}

  end_dt = datetime.now()
  delta = round((end_dt - start_dt).total_seconds())

  if failures:
    print(f'Following {len(failures)} failed:')
    pprint.pprint(sorted(failures.keys()))

  print('')
  print(f'Completed CI artifact extraction @ {str(end_dt)} in {str(delta)} seconds')

  return -1 if failures else 0


if __name__ == '__main__':
  sys.exit(_main())
