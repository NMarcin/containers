cmake_minimum_required(VERSION 3.12)
project(containers)

set(CMAKE_CXX_STANDARD 17)

include_directories(stack)

add_executable(containers main.cpp stack/Node.cpp stack/Node.hpp stack/Stack.cpp stack/Stack.hpp stack/stackMenu.hpp)