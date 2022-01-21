cmake_minimum_required(VERSION 3.16.3)
project(timer)
set(CMAKE_CXX_STANDARD 14)
aux_source_directory(./src all)

add_library(timer SHARED ${all})
#add_library(timer STATIC ./src/timer.cpp ./src/timer.h)
