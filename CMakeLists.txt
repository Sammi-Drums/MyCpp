cmake_minimum_required(VERSION 3.29)
project(MyCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyCpp main.cpp
        Monster.cpp
        Monster.h)
