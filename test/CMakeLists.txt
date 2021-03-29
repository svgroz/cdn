find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

add_executable(
    cdb_test
    test_main.cpp
    test_hello.cpp          
)
target_include_directories(cdb_test PRIVATE ../lib)
target_link_libraries(cdb_test cdb_lib ${GTEST_LIBRARIES} Threads::Threads)

