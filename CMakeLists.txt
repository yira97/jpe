cmake_minimum_required(VERSION 3.15)
project(jpe)

add_compile_options(-std=c++17)

include_directories(include)

add_executable(jpe src/main.cpp)