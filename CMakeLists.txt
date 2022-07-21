cmake_minimum_required(VERSION 3.22)
project(Bubble_Sort C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Bubble_Sort
        List_functions.h
        main.c
        sort_methods.h)
