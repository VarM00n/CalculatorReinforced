project(Addition)

set(HEADER_FILES AdditionOperation.h)
set(SOURCE_FILES AdditionOperation.cpp)

add_library(Addition STATIC ${SOURCE_FILES} ${HEADER_FILES})