cmake_minimum_required(VERSION 3.24)
project(Q1)

set(CMAKE_CXX_STANDARD 17)
find_package(SDL2 REQUIRED SDL2)
add_executable(Q1 main.cpp)
target_link_libraries(Q1 PRIVATE SDL2)