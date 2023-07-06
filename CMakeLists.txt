cmake_minimum_required(VERSION 3.25)
project(FreeTypeBinding)

set(CMAKE_CXX_STANDARD 17)

add_library(FreeTypeBinding SHARED ftface.cpp)

include_directories(freetype/include)
