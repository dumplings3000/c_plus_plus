cmake_minimum_required(VERSION 3.0)
project("solider shoot")
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(shoot main.cpp src/gun.cpp src/solder.cpp)