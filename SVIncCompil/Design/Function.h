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
 * File:   Function.h
 * Author: alain
 *
 * Created on February 21, 2019, 8:19 PM
 */

#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>
#include "../SourceCompile/SymbolTable.h"
#include "FileContent.h"
#include "../SourceCompile/VObjectTypes.h"
#include "DataType.h"
#include "Scope.h"
#include "TfPortItem.h"
#include "Statement.h"
#include "../Testbench/Variable.h"
#include "../DesignCompile/CompileHelper.h"

namespace SURELOG {

class Procedure : public Scope, public Statement {
 public:
  Procedure(DesignComponent* parent, FileContent* fC, NodeId id,
            std::string name)
      : Scope(name, NULL),
        Statement(this, NULL, fC, id,
                  fC ? fC->Type(id) : VObjectType::slFunction_prototype),
        m_parent(parent),
        m_fileContent(fC),
        m_nodeId(id),
        m_name(name) {}

  ~Procedure() {}

  DesignComponent* getParent() { return m_parent; }

  std::string getName() { return m_name; }

  FileContent* getFileContent() { return m_fileContent; }

  NodeId getNodeId() { return m_nodeId; }

  TfPortList& getParams() { return m_params; }

 protected:
  DesignComponent* m_parent;
  FileContent* m_fileContent;
  NodeId m_nodeId;
  std::string m_name;
  TfPortList m_params;
};

class SeqBlock : public Scope, public Statement {
 public:
  SeqBlock(std::string name, Scope* parent, Statement* parentStmt,
           FileContent* fC, NodeId id)
      : Scope(name, parent),
        Statement(this, parentStmt, fC, id,
                  fC ? fC->Type(id) : VObjectType::slSeq_block){};
};

class Function : public Procedure {
 public:
  Function(DesignComponent* parent, FileContent* fC, NodeId id,
           std::string name, DataType* returnType)
      : Procedure(parent, fC, id, name), m_returnType(returnType) {}
  bool compile(CompileHelper& compile_helper);
  virtual ~Function();

  DataType* getReturnType() { return m_returnType; }

 private:
  DataType* m_returnType;
};
};  // namespace SURELOG

#endif /* FUNCTION_H */
