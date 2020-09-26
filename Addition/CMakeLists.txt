project(Addition)

set(HEADER_FILES Addition.h)
set(SOURCE_FILES Addition.cpp)

add_library(Addition STATIC ${SOURCE_FILES} ${HEADER_FILES})