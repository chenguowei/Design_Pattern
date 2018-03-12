cmake_minimum_required(VERSION 3.9)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 11)

add_executable(Design_Patterns main.cpp prototype/Prototype.cpp prototype/Prototype.h prototype/main.cpp singleton/Singleton.cpp singleton/Singleton.h singleton/main.cpp)