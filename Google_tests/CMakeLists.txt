project(Google_Tests)

add_subdirectory(lib)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run Addition_Tests/AdditionOperationTests.cpp Number_Tests/NumberOperationTests.cpp Number_Tests/NumberCoreTests.cpp)


target_link_libraries(Google_Tests_run gtest gtest_main)
target_link_libraries(Google_Tests_run Addition)
target_link_libraries(Google_Tests_run Number)
target_link_libraries(Google_Tests_run Subtraction)
target_link_libraries(Google_Tests_run Multiplication)
target_link_libraries(Google_Tests_run Division)
