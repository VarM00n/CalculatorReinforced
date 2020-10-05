cmake_minimum_required(VERSION 3.10)

project(CalculatorReinfored)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Number)
add_subdirectory(Subtraction)
add_subdirectory(Addition)
add_subdirectory(Multiplication)
add_subdirectory(Division)
add_subdirectory(Interpreter)
add_subdirectory(Google_Tests)


include_directories(Number)
include_directories(Addition)
include_directories(Subtraction)
include_directories(Multiplication)
include_directories(Division)
include_directories(Interpreter)

#add_executable(CalculatorReinfored main.cpp)

add_executable(CalculatorReinfored main.cpp Number/Number.cpp Number/Number.h Number/NumberValidation.cpp Number/NumberValidation.h Number/NumberCore.h Addition/Addition.cpp Addition/Addition.h  Subtraction/Subtraction.cpp Subtraction/Subtraction.h Multiplication/Multiplication.cpp Multiplication/Multiplication.h Division/Division.cpp Division/Division.h Interpreter/InterpreterForString.cpp Interpreter/InterpreterForString.h)