cmake_minimum_required(VERSION 3.17)
project(lab_first LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
add_executable(lab_first main.cpp)
#set_target_properties(lab_first PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")