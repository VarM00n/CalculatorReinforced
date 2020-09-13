cmake_minimum_required(VERSION 3.10)

project(CalculatorReinfored)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Subtraction)
add_subdirectory(Addition)
add_subdirectory(Multiplication)
add_subdirectory(Number)
add_subdirectory(Google_Tests)

include_directories(Addition)
include_directories(Subtraction)
include_directories(Multiplication)
include_directories(Number)


add_executable(CalculatorReinfored main.cpp Addition/Addition.cpp Addition/Addition.h Number/Number.cpp Number/Number.h Subtraction/Subtraction.cpp Subtraction/Subtraction.h Multiplication/Multiplication.cpp Multiplication/Multiplication.h)