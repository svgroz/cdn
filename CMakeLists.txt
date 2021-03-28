cmake_minimum_required (VERSION 3.16.3 FATAL_ERROR)
project(cdb)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED on)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/include")
file(GLOB main_sources "${PROJECT_SOURCE_DIR}/src/*.c")
file(GLOB test_sources "${PROJECT_SOURCE_DIR}/test/*.cpp")

add_library(cdb_lib ${main_sources})
add_executable(cdb_test ${test_sources})
target_link_libraries(cdb_test cdb_lib ${GTEST_LIBRARIES} Threads::Threads)
