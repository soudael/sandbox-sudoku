cmake_minimum_required(VERSION 3.10)
project(Sudoku)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
file(GLOB_RECURSE SRC_FILES "src/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(sudoku ${SRC_FILES})