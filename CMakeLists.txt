cmake_minimum_required(VERSION 3.10)

project(gtest01 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++17")

add_subdirectory(src)
add_subdirectory(tests)
