project(Google_Tests)

add_subdirectory(lib)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run Addition_Tests/AdditionOperationTests.cpp Number_Tests/NumberOperationTests.cpp)

target_link_libraries(Google_Tests_run Number)
target_link_libraries(Google_Tests_run gtest gtest_main)