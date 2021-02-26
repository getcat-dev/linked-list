cmake_minimum_required(VERSION 3.17)
project(Linked_list)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Linked_list
        DataStruct.h
        LinkedList.h
        main.cpp)
