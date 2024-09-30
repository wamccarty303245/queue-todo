cmake_minimum_required(VERSION 3.28)
project(queue_todo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(queue_todo
        main.cpp
        queue_functions.cpp
        queue_head.h)
