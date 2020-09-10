project(Number)

set(HEADER_FILES Number.h)
set(SOURCE_FILES Number.cpp )

add_library(Number STATIC ${SOURCE_FILES} ${HEADER_FILES})