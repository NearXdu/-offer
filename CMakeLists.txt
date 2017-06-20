cmake_minimum_required(VERSION 2.6)

PROJECT (OFFER)

set(CMAKE_CXX_FLAGS "-O0 -ggdb -std=c++11")
set(CMAKE_CXX_COMPILER "g++")


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

SET(SRC_DIR ../src)
add_executable(hello ${SRC_DIR}/hello.cpp)

SET(SRC_DIR ../src)
add_executable(3 ${SRC_DIR}/3.cpp)

SET(SRC_DIR ../src)
add_executable(4 ${SRC_DIR}/4.cpp)

SET(SRC_DIR ../src)
add_executable(5 ${SRC_DIR}/5.cpp)

SET(SRC_DIR ../src)
add_executable(6 ${SRC_DIR}/6.cpp)

SET(SRC_DIR ../src)
add_executable(7 ${SRC_DIR}/7.cpp)

SET(SRC_DIR ../src)
add_executable(8 ${SRC_DIR}/8.cpp)
