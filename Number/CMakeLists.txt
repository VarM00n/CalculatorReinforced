project(Number)

set(HEADER_FILES Number.h NumberValidation.h NumberCore.h)
set(SOURCE_FILES Number.cpp NumberValidation.cpp)

add_library(Number STATIC ${SOURCE_FILES} ${HEADER_FILES})