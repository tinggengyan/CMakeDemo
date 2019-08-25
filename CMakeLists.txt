# announce minimum version needed
cmake_minimum_required(VERSION 3.12)

# custom project name
project(hello)

# set cpp version 
set(CMAKE_CXX_STANDARD 14)

add_subdirectory (lib)

# inlcude headers
include_directories(./lib/inc)

aux_source_directory(./example/src hello_src)

add_executable(hello ${hello_src})

target_link_libraries(hello lib_demo)

