project(Division)

set(HEADER_FILES Division.h)
set(SOURCE_FILES Division.cpp)


add_library(Division STATIC ${SOURCE_FILES} ${HEADER_FILES})