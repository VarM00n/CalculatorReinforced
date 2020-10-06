project(Interpreter)

set(HEADER_FILES InterpreterForString.h CleanStringForInterpreter.h InterpreterCore.h)
set(SOURCE_FILES InterpreterForString.cpp CleanStringForInterpreter.cpp RPN.cpp RPN.h)


add_library(Interpreter STATIC ${SOURCE_FILES} ${HEADER_FILES})