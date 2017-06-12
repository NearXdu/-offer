cmake_minimum_required(VERSION 2.6)

PROJECT (OFFER)

set(CMAKE_CXX_FLAGS "-O0 -ggdb")
set(CMAKE_CXX_COMPILER "g++")


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

SET(SRC_DIR ../src)
add_executable(hello ${SRC_DIR}/hello.cpp)
