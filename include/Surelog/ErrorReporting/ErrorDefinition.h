/*
 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   ErrorDefinition.h
 * Author: alain
 *
 * Created on March 5, 2017, 11:25 PM
 */

#ifndef SURELOG_ERRORDEFINITION_H
#define SURELOG_ERRORDEFINITION_H
#pragma once

#if defined(_WIN32)
  #if defined(FATAL)
    #undef FATAL
  #endif
  #if defined(SYNTAX)
    #undef SYNTAX
  #endif
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(WARNING)
    #undef WARNING
  #endif
  #if defined(INFO)
    #undef INFO
  #endif
  #if defined(NOTE)
    #undef NOTE
  #endif
#endif

#include <map>
#include <string>
#include <string_view>

namespace SURELOG {

class ErrorDefinition {
 public:
  enum ErrorSeverity { FATAL, SYNTAX, ERROR, WARNING, INFO, NOTE };

  enum ErrorCategory {
    CMD,
    PP,
    PARSE,
    PYTH,
    LANG,
    SEMA,
    COMP,
    ELAB,
    LIB,
    LINT,
    USER,
    UHDM,
  };

  enum ErrorType {
    NO_ERROR_MESSAGE = 0,
    CMD_FILE_DOES_NOT_EXIST = 1,
    CMD_CANNOT_OPEN_FILE_FOR_READ = 2,
    CMD_CANNOT_OPEN_FILE_FOR_WRITE = 3,
    CMD_DASH_F_FILE_DOES_NOT_EXIST = 4,
    CMD_INCLUDE_PATH_DOES_NOT_EXIST = 5,
    CMD_LIBRARY_FILE_DOES_NOT_EXIST = 6,
    CMD_LIBRARY_PATH_DOES_NOT_EXIST = 7,
    CMD_VERILOG_FILE_DOES_NOT_EXIST = 8,
    CMD_PLUS_ARG_IGNORED = 9,
    CMD_MINUS_ARG_IGNORED = 10,
    CMD_DEBUG_MISSING_LEVEL = 11,
    CMD_DEBUG_INCORRECT_LEVEL = 12,
    CMD_LIBRARY_FILE_MISSING_FILE = 13,
    CMD_LIBRARY_PATH_MISSING_PATH = 14,
    CMD_LOG_FILE_MISSING_FILE = 15,
    CMD_PP_FILE_MISSING_FILE = 16,
    CMD_MT_MISSING_LEVEL = 17,
    CMD_MT_INCORRECT_LEVEL = 19,
    CMD_SEPARATE_COMPILATION_UNIT_ON = 20,
    CMD_PP_FILE_MISSING_ODIR = 21,
    CMD_PP_CANNOT_CREATE_OUTPUT_DIR = 22,
    CMD_CREATING_LOG_FILE = 23,
    CMD_NUMBER_THREADS = 24,
    CMD_PP_CANNOT_CREATE_CACHE_DIR = 25,
    CMD_TIMESCALE_MISSING_SETTING = 26,
    CMD_SPLIT_FILE_MISSING_SIZE = 27,
    CMD_UNDEFINED_CONFIG = 28,
    CMD_USING_GLOBAL_TIMESCALE = 29,
    CMD_CACHE_CAPACITY_EXCEEDED = 30,
    CMD_WD_MISSING_DIR = 31,
    CMD_CD_MISSING_DIR = 32,
    CMD_REMAP_MISSING_DIRS = 33,
    PP_CANNOT_OPEN_FILE = 100,
    PP_CANNOT_OPEN_INCLUDE_FILE = 101,
    PP_UNKOWN_MACRO = 102,
    PP_UNDEF_UNKOWN_MACRO = 103,
    PP_OPEN_FILE_FOR_WRITE = 104,
    PP_MULTIPLY_DEFINED_MACRO = 105,
    PP_SYNTAX_ERROR = 106,
    PP_TOO_MANY_ARGS_MACRO = 107,
    PP_MACRO_SYNTAX_ERROR = 108,
    PP_MACRO_NO_DEFAULT_VALUE = 109,
    PP_MACRO_PARENTHESIS_NEEDED = 110,
    PP_MACRO_NAME_RESERVED = 111,
    PP_MACRO_HAS_SPACE_BEFORE_ARGS = 112,
    PP_MACRO_UNUSED_ARGUMENT = 113,
    PP_MACRO_UNDEFINED_ARGUMENT = 114,
    PP_RECURSIVE_MACRO_DEFINITION = 115,
    PP_UNTERMINATED_STRING = 116,
    PP_UNESCAPED_CHARACTER_IN_STRING = 117,
    PP_UNRECOGNIZED_ESCAPED_SEQUENCE = 118,
    PP_INVALID_INCLUDE_FILENAME = 119,
    PP_ILLEGAL_DIRECTIVE_IN_DESIGN_ELEMENT = 120,
    PP_CANNOT_CREATE_DIRECTORY = 121,
    PP_PROCESSING_SOURCE_FILE = 122,
    PP_PROCESSING_INCLUDE_FILE = 123,
    PP_ILLEGAL_DIRECTIVE_ELSEIF = 124,
    PP_CANNOT_READ_FILE_CONTENT = 125,
    PP_RECURSIVE_INCLUDE_DIRECTIVE = 126,
    PP_ILLEGAL_TICK_LINE_VALUE = 127,
    PP_NON_ASCII_CONTENT = 128,
    PA_CANNOT_SPLIT_FILE = 200,
    PA_PROCESSING_SOURCE_FILE = 201,
    PA_CANNOT_OPEN_FILE = 202,
    PA_UNKOWN_MACRO = 203,
    PA_MAX_LENGTH_IDENTIFIER = 204,
    PA_NOTIMESCALE_INFO = 205,
    PA_MISSING_TIMEUNIT = 206,
    PA_SYNTAX_ERROR = 207,
    PA_RESERVED_KEYWORD = 208,
    PA_UNSUPPORTED_KEYWORD_LIST = 209,
    PA_UNCONNECTED_DRIVE_VALUE = 210,
    PA_TIMESCALE_INVALID_VALUE = 211,
    PA_TIMESCALE_INVALID_SCALE = 212,
    PA_INTERNAL_ERROR = 213,
    PA_INTERNAL_WARNING = 214,
    COMP_COMPILE = 300,
    COMP_COMPILE_PACKAGE = 301,
    COMP_COMPILE_CLASS = 302,
    COMP_COMPILE_MODULE = 303,
    COMP_COMPILE_INTERFACE = 304,
    COMP_COMPILE_UDP = 305,
    COMP_COMPILE_PROGRAM = 306,
    COMP_COMPILE_CHECKER = 307,
    COMP_UNDEFINED_INTERFACE = 308,
    COMP_PORT_MISSING_TYPE = 309,
    COMP_PORT_MISSING_DIRECTION = 310,
    COMP_MODPORT_UNDEFINED_PORT = 311,
    COMP_MODPORT_UNDEFINED_CLOCKING_BLOCK = 312,
    COMP_NO_MODPORT_IN_GENERATE = 313,
    COMP_PROGRAM_OBSOLETE_USAGE = 314,
    COMP_UNDEFINED_CLASS = 315,
    COMP_UNDEFINED_PACKAGE = 316,
    COMP_UNDEFINED_TYPE = 317,
    COMP_MULTIPLY_DEFINED_PROPERTY = 318,
    COMP_MULTIPLY_DEFINED_CLASS = 319,
    COMP_MULTIPLY_DEFINED_FUNCTION = 320,
    COMP_MULTIPLY_DEFINED_TASK = 321,
    COMP_MULTIPLY_DEFINED_CONSTRAINT = 322,
    COMP_MULTIPLY_DEFINED_TYPEDEF = 323,
    COMP_MULTIPLY_DEFINED_INNER_CLASS = 324,
    COMP_MULTIPLY_DEFINED_COVERGROUP = 325,
    COMP_MULTIPLY_DEFINED_PARAMETER = 326,
    COMP_UNDEFINED_VARIABLE = 327,
    COMP_UNDEFINED_BASE_CLASS = 328,
    COMP_MULTIPLY_DEFINED_PACKAGE = 329,
    COMP_INCOMPATIBLE_TYPES = 330,
    COMP_MULTIPLY_DEFINED_VARIABLE = 331,
    COMP_NO_METHOD_FOR_TYPE = 332,
    COMP_UNDEFINED_SYSTEM_FUNCTION = 333,
    COMP_MULTIPLY_DEFINED_DESIGN_UNIT = 334,
    COMP_COMPILE_GENERATE_BLOCK = 335,
    COMP_INTERNAL_ERROR_OUT_OF_BOUND = 336,
    COMP_UNDEFINED_USER_FUNCTION = 337,
    COMP_CANNOT_REDEFINE_BUILTIN_METHOD = 338,
    COMP_ILLEGAL_TIMESCALE = 339,
    COMP_UNSPECIFIED_PORT = 340,
    COMP_UNMATCHED_LABEL = 341,
    COMP_SKIPPING_BLACKBOX_MODULE = 342,
    COMP_SKIPPING_BLACKBOX_INSTANCE = 343,
    COMP_ILLEGAL_DEFAULT_PORT_VALUE = 344,
    PY_PROCESSING_SOURCE_FILE = 400,
    PY_NO_PYTHON_LISTENER_FOUND = 401,
    ELAB_NO_MODULE_DEFINITION = 500,
    ELAB_NO_UDP_DEFINITION = 501,
    ELAB_NO_INTERFACE_DEFINITION = 502,
    ELAB_TOP_LEVEL_MODULE = 503,
    ELAB_MULTIPLE_TOP_LEVEL_MODULES = 504,
    ELAB_MULTIPLY_DEFINED_MODULE = 505,
    ELAB_NO_TOP_LEVEL_MODULE = 506,
    ELAB_INSTANTIATION_LOOP = 507,
    ELAB_NB_TOP_LEVEL_MODULES = 508,
    ELAB_MAX_INSTANCE_DEPTH = 509,
    ELAB_NB_INSTANCES = 510,
    ELAB_NB_LEAF_INSTANCES = 511,
    ELAB_NB_UNDEF_MODULES = 512,
    ELAB_NB_UNDEF_INSTANCES = 513,
    ELAB_UNDEF_VARIABLE = 514,
    ELAB_UNMATCHED_DEFPARAM = 515,
    ELAB_DEFPARAM_OUTSIDE_SCOPE = 516,
    ELAB_MULTI_DEFPARAM_ON_OBJECT = 517,
    ELAB_UNDEFINED_CONFIG = 518,
    ELAB_CONFIGURATION_USED = 519,
    ELAB_CONFIGURATION_IGNORED = 520,
    ELAB_USE_CLAUSE_IGNORED = 521,
    ELAB_SCOPE_PATH = 522,
    ELAB_INSTANCE_PATH = 523,
    ELAB_INTERFACE_INSTANCE_PATH = 524,
    ELAB_PROGRAM_INSTANCE_PATH = 525,
    ELAB_ELABORATING_DESIGN = 526,
    ELAB_ELABORATING_TESTBENCH = 527,
    ELAB_UNDEFINED_PACKAGE = 528,
    ELAB_OUT_OF_RANGE_PARAM_INDEX = 530,
    ELAB_NEGATIVE_VALUE = 531,
    ELAB_DIVIDE_BY_ZERO = 532,
    ELAB_TOP_LEVEL_DOES_NOT_EXIST = 533,
    ELAB_TOP_LEVEL_IS_NOT_A_TOP_LEVEL = 534,
    ELAB_ILLEGAL_IMPLICIT_NET = 535,
    ELAB_ILLEGAL_ZERO_VALUE = 536,
    ELAB_EMPTY_PARAM_OVERRIDE = 537,
    ELAB_USE_INTERFACE_AS_SIGNAL_TYPE = 538,
    ELAB_UNKNOWN_STRUCT_MEMBER = 539,
    ELAB_UNKNOWN_INTERFACE_MEMBER = 540,
    ELAB_UNKNOWN_PARAMETER = 541,
    ELAB_EXPRESSION_LOOP = 542,
    ELAB_SKIPPING_BLACKBOX_MODULE = 543,
    ELAB_SKIPPING_BLACKBOX_INSTANCE = 544,
    ELAB_INVALID_CASE_STMT_VALUE = 545,
    ELAB_SYSTEM_FATAL = 546,
    ELAB_SYSTEM_ERROR = 547,
    ELAB_SYSTEM_WARNING = 548,
    ELAB_SYSTEM_INFO = 549,
    ELAB_UNKNOWN_PORT = 550,
    ELAB_TOP_PARAMETER_NO_DEFAULT = 551,
    LIB_FILE_MAPS_TO_MULTIPLE_LIBS = 600,
    UHDM_UNSUPPORTED_EXPR = 700,
    UHDM_UNSUPPORTED_STMT = 701,
    UHDM_UNSUPPORTED_SIGNAL = 702,
    UHDM_WRONG_OBJECT_TYPE = 703,
    UHDM_WRONG_COVERAGE_LINE = 704,
    UHDM_UNSUPPORTED_TYPE = 705,
    UHDM_CREATING_MODEL = 706,
    UHDM_ELABORATION = 707,
    UHDM_WRITE_DB = 708,
    UHDM_WRITE_HTML_COVERAGE = 709,
    UHDM_LOAD_DB = 710,
    UHDM_VISITOR = 711,
    UHDM_UNDEFINED_PATTERN_KEY = 712,
    UHDM_UNMATCHED_FIELD_IN_PATTERN_ASSIGN = 713,
    UHDM_REAL_TYPE_AS_SELECT = 714,
    UHDM_RETURN_VALUE_VOID_FUNCTION = 715,
    UHDM_ILLEGAL_DEFAULT_VALUE = 716,
    UHDM_MULTIPLE_CONT_ASSIGN = 717,
    UHDM_ILLEGAL_WIRE_LHS = 718,
    UHDM_ILLEGAL_PACKED_DIMENSION = 719,
    UHDM_NON_SYNTHESIZABLE = 720,
    UHDM_ENUM_CONST_SIZE_MISMATCH = 721,
    UHDM_DIVIDE_BY_ZERO = 722,
    UHDM_INTERNAL_ERROR_OUT_OF_BOUND = 723,
    UHDM_UNDEFINED_USER_FUNCTION = 724,
    UHDM_UNRESOLVED_HIER_PATH = 725,
    UHDM_UNDEFINED_VARIABLE = 726,
    UHDM_INVALID_CASE_STMT_VALUE = 727,
    UHDM_UNSUPPORTED_TYPESPEC = 728,
    UHDM_UNRESOLVED_PROPERTY = 729,
    UHDM_NON_TEMPORAL_SEQUENCE_USE = 730,
    UHDM_NON_POSITIVE_VALUE = 731
  };

  class ErrorInfo {
   public:
    ErrorInfo(ErrorSeverity severity, ErrorCategory category,
              std::string_view s, std::string_view extra)
        : m_severity(severity),
          m_category(category),
          m_errorText(s),
          m_extraText(extra) {}

    ErrorSeverity m_severity;
    const ErrorCategory m_category;
    const std::string m_errorText;
    const std::string m_extraText;
  };

  static bool init();

  static const std::map<ErrorType, ErrorInfo>& getErrorInfoMap() {
    return *mutableGlobalErrorInfoMap();
  }

  static ErrorType getErrorType(std::string_view errorId);
  static ErrorSeverity getErrorSeverity(std::string_view errorSeverity);
  static std::string getCategoryName(ErrorCategory caterory);
  static ErrorCategory getCategory(std::string_view category);

  static void setSeverity(ErrorType type, ErrorSeverity severity);
  static void rec(ErrorType type, ErrorSeverity severity,
                  ErrorCategory category, std::string_view text,
                  std::string_view extraText = "");

 private:
  ErrorDefinition();
  ErrorDefinition(const ErrorDefinition& orig);
  virtual ~ErrorDefinition();

  using ErrorMap = std::map<ErrorType, ErrorInfo>;
  static ErrorMap* mutableGlobalErrorInfoMap();
};

};  // namespace SURELOG

#endif /* SURELOG_ERRORDEFINITION_H */
