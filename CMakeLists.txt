cmake_minimum_required(VERSION 3.12)
project(containers)

set(CMAKE_CXX_STANDARD 17)

include_directories(stack)
include_directories(queue)
include_directories(list)

add_executable(containers main.cpp stack/Node.cpp stack/Node.hpp stack/Stack.cpp stack/Stack.hpp stack/stackMenu.hpp queue/Queue.cpp queue/Queue.hpp queue/queueMenu.hpp list/NodeList.cpp list/NodeList.hpp list/List.cpp list/List.hpp)