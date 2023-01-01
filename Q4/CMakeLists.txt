cmake_minimum_required(VERSION 3.24)
project(Q4)

set(CMAKE_CXX_STANDARD 17)
find_package(SDL2 REQUIRED SDL2)

add_executable(Q4 main.cpp)
target_link_libraries(Q4 PRIVATE SDL2)
