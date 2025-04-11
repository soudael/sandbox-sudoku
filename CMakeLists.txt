cmake_minimum_required(VERSION 3.10)
project(sudoku)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
file(GLOB_RECURSE SRC_FILES "src/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(sudoku ${SRC_FILES})