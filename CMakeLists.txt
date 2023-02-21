cmake_minimum_required(VERSION 3.23)
project(Matrix_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Matrix_CPP
        src/main.cpp
        src/main.h
        src/Makefile
        src/tests.cpp)
