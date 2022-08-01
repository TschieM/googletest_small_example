cmake_minimum_required(VERSION 3.14)
project(googletest_tutorial)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(BUILD_PEDANTIC_DOC "Build the project with -Wall, -Wextra and -Wpedantic.")

add_subdirectory(test)