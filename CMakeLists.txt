cmake_minimum_required(VERSION 3.10) #This project needs at least CMake version 3.10
project(amf) #GOAL: Define your project name

set(CMAKE_CXX_STANDARD 17) #Use C++17 standard

include_directories(include)

add_executable(amf 
    src/main.cpp
    src/common/logger.cpp
    src/core/dispatcher.cpp
    src/core/event_loop.cpp
) #Compile this file into a binary named amf