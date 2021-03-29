add_executable(cdb_app main.c)
target_link_libraries(cdb_app cdb_lib)
target_include_directories(cdb_app PRIVATE ../lib)

