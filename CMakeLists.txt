cmake_minimum_required(VERSION 3.31)
project(cowsay C)

set(CMAKE_C_STANDARD 11)

add_executable(cowsay src/main.c
        src/core/cow.c
        src/core/cow.h
        src/utils/argv_handler.c
        src/utils/argv_handler.h)
