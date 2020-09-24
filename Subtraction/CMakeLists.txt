project(Substraction)

set(HEADER_FILES Subtraction.h)
set(SOURCE_FILES Subtraction.cpp)

add_library(Subtraction STATIC ${SOURCE_FILES} ${HEADER_FILES})