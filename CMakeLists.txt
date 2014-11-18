cmake_minimum_required(VERSION 2.6)

project(gmock-sample CXX)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(TESTS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/test")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(LIB_NAME "gmock-sample")

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -pedantic")

file(GLOB_RECURSE SRC_FILES "${SRC_DIR}/*.cpp")
include_directories("${INCLUDE_DIR}")

add_library("${LIB_NAME}" STATIC "${SRC_FILES}")

add_subdirectory(${TESTS_DIR})
