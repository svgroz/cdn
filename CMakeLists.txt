cmake_minimum_required (VERSION 3.16.3 FATAL_ERROR)
project(cdb)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED on)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(test)