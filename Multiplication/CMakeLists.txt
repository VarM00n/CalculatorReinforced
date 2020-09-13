project(Multiplication)

set(HEADER_FILES Multiplication.h)
set(SOURCE_FILES Multiplication.cpp)

add_library(Multiplication STATIC ${SOURCE_FILES} ${HEADER_FILES})