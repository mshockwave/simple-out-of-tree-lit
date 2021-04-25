cmake_minimum_required(VERSION 3.2)
project(simple-out-of-tree-lit)

set(CMAKE_CXX_STANDARD 14)

add_executable(word-counter
  word-counter.cpp)

add_subdirectory(test)
