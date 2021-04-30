#!/usr/bin/tclsh

# Copyright 2019 Alain Dargelas
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


set fid [open "parser/SV3_1aParserBaseListener.h"]
set content [read $fid]
close $fid


set lines [split $content "\n"]

set oid [open "API/SV3_1aPythonListener.h" "w"]
set pid [open "API/slSV3_1aPythonListener.py" "w"]

puts $oid "// This file is automatically generated by generate_python_listener_api.tcl DO NOT EDIT!!!"

puts $oid "/*"
puts $oid " Copyright 2019 Alain Dargelas"
puts $oid " Licensed under the Apache License, Version 2.0 (the \"License\");"
puts $oid " you may not use this file except in compliance with the License."
puts $oid " You may obtain a copy of the License at"
puts $oid ""
puts $oid "    http://www.apache.org/licenses/LICENSE-2.0"
puts $oid ""
puts $oid " Unless required by applicable law or agreed to in writing, software"
puts $oid " distributed under the License is distributed on an \"AS IS\" BASIS,"
puts $oid " WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied."
puts $oid " See the License for the specific language governing permissions and"
puts $oid " limitations under the License."
puts $oid " */"
puts $oid "#ifndef SV3_1APYTHONLISTENER_H"
puts $oid "#define SV3_1APYTHONLISTENER_H"
puts $oid ""
puts $oid "#include \"PythonAPI.h\""
puts $oid "#include \"SourceCompile/CompileSourceFile.h\""
puts $oid "#include \"SourceCompile/ParseFile.h\""
puts $oid "#include \"SourceCompile/PythonListen.h\""
puts $oid "#include \"parser/SV3_1aParserBaseListener.h\""
puts $oid ""
puts $oid "namespace SURELOG {"
puts $oid ""
puts $oid ""
puts $oid "class SV3_1aPythonListener : public SV3_1aParserBaseListener {"
puts $oid "private:"
puts $oid "    PythonListen* m_pl;"
puts $oid "    PyThreadState* m_interpState;"
puts $oid "    antlr4::CommonTokenStream* m_tokens;"
puts $oid "    unsigned int               m_lineOffset;"
puts $oid "public:"
puts $oid "    SV3_1aPythonListener(PythonListen* pf, PyThreadState* interpState, antlr4::CommonTokenStream* tokens, unsigned int lineOffset);"
puts $oid "    SV3_1aPythonListener(const SV3_1aPythonListener& orig);"
puts $oid "    PyThreadState* getPyThreadState() { return m_interpState; }"
puts $oid "    PythonListen*  getPythonListen() { return m_pl; }"
puts $oid "    antlr4::CommonTokenStream* getTokenStream() { return m_tokens; }"
puts $oid "    ~SV3_1aPythonListener();"
puts $oid ""
puts $oid " void logError(ErrorDefinition::ErrorType error, antlr4::ParserRuleContext* ctx, std::string object, bool printColumn = false);"
puts $oid " void logError(ErrorDefinition::ErrorType, Location& loc, bool showDuplicates = false);"
puts $oid " void logError(ErrorDefinition::ErrorType, Location& loc, Location& extraLoc, bool showDuplicates = false);"


puts $pid "# This is a SURELOG Python API Listener"
puts $pid ""
puts $pid "trace = 1"
puts $pid ""

foreach line $lines {
    if [regexp {virtual} $line] {
	regsub {virtual} $line "" line
	regsub {override \{ \}} $line "" line
	regsub {/\*ctx\*/} $line "ctx" line
	regsub {/\*node\*/} $line "node" line
	if [regexp {void (enter[a-zA-Z0-9_]+)} $line tmp ruleName] {
	} elseif [regexp {void (exit[a-zA-Z0-9_]+)} $line tmp ruleName] {
	} elseif [regexp {void (visit[a-zA-Z0-9_]+)} $line tmp ruleName] {
	}
	set object "ctx"
	if [regexp {\* node} $line] {
	    set object "node"
	}
	puts $oid "$line  \{"
        puts $oid "PythonAPI::evalScript(\"$ruleName\", this, (parser_rule_context*) $object);"
	puts $oid "\}"
        puts $oid ""

	puts $pid "def ${ruleName}(prog, ctx):"
	if [regexp {enter} $ruleName] {
	    if ![regexp {enterEveryRule} $ruleName] {
		puts $pid "\tif trace:"
		puts $pid "\t\tprint(\"$ruleName\")"
		puts $pid "\t\tprint(\"  File:\",SLgetFile(prog, ctx),\",\",SLgetLine(prog, ctx))"
		puts $pid "\t\ttext = SLgetText(prog, ctx)"
		puts $pid "\t\tprint(\"  Text:\",text\[:20\],\"...\")"
	    }
	}
	puts $pid "\tpass"
	puts $pid ""
    }
}

puts $oid ""
puts $oid ""

puts $oid "\};"

puts $oid "\};"

puts $oid "#endif /* SV3_1APYTHONLISTENER_H */"

flush $oid
close $oid

flush $pid
close $pid

flush stdout
