cmake_minimum_required(VERSION 3.16)
project(trans)

set(CMAKE_CXX_STANDARD 14)
aux_source_directory(./src src)
add_library(trans SHARED ${src})
