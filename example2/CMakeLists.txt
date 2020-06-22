# inlcude headers
include_directories(../lib/inc)

aux_source_directory(./src hello_src)

add_executable(hello2 ${hello_src})

target_link_libraries(hello2 lib_demo)

