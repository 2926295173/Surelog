/*
 Copyright 2021 Alain Dargelas

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
 * File:   CompilerHarness.h
 * Author: alain
 *
 * Created on June 5, 2021, 10:00 AM
 */

#ifndef COMPILERHARNESS_H
#define COMPILERHARNESS_H

#include <memory>

#include "DesignCompile/CompileDesign.h"

namespace SURELOG {

class CompilerHarness {
 public:
  static std::unique_ptr<CompileDesign> createCompileDesign();
};

};  // namespace SURELOG

#endif /* COMPILERHARNESS_H */
