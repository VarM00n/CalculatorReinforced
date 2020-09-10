cmake_minimum_required(VERSION 3.10)

project(CalculatorReinfored)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(Addition)
add_subdirectory(Number)
add_subdirectory(Google_Tests)

include_directories(Addition)
include_directories(Number)

add_executable(CalculatorReinfored main.cpp Addition/AdditionOperation.cpp Addition/AdditionOperation.h Number/Number.cpp Number/Number.h)