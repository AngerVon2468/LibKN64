cmake_minimum_required(VERSION 3.31)
project(LibKN64)

set(CMAKE_CXX_STANDARD 20)

add_library(LibKN64 STATIC libkn64.cpp
        kotlin/kn64ref.cpp
        kotlin/kn64ref.h)

target_link_libraries(LibKN64 PRIVATE ${CMAKE_SOURCE_DIR}/kotlin/libkotlin64recomp.so)