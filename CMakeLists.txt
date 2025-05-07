cmake_minimum_required(VERSION 3.10)

project(AVL_tree)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(AVL_tree main.cpp
        eAVL/eAVL.h
        eAVL/treeNode.h
)