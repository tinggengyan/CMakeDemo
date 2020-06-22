# announce minimum version needed
cmake_minimum_required(VERSION 3.12)

# custom project name
project(hello)

# set cpp version 
set(CMAKE_CXX_STANDARD 14)

add_subdirectory (lib)
add_subdirectory (example)
add_subdirectory (example2)


