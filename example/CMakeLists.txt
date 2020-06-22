
# inlcude headers
include_directories(../lib/inc)

aux_source_directory(./src hello_src)

add_executable(hello ${hello_src})

target_link_libraries(hello lib_demo)

