cmake_minimum_required(VERSION 3.24)
project(Chess)

set(CMAKE_CXX_STANDARD 23)

add_executable(Chess main.cpp board.h board.cpp)
