cmake_minimum_required(VERSION 2.8)

project(gtest01 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11")

enable_testing()
find_package(PkgConfig)

add_subdirectory(src)
add_subdirectory(tests)
