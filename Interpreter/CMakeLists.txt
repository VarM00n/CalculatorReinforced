project(Interpreter)

set(HEADER_FILES InterpreterForString.h)
set(SOURCE_FILES InterpreterForString.cpp CleanStringForInterpreter.cpp CleanStringForInterpreter.h)


add_library(Interpreter STATIC ${SOURCE_FILES} ${HEADER_FILES})