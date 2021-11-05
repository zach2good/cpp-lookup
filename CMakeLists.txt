cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(cpp-lookup)

set(SOURCES
    src/main.cpp
    src/ctrp.cpp)

include(cmake/CPM.cmake)
CPMAddPackage("gh:catchorg/Catch2@2.5.0")

target_include_directories(src)
target_link_libraries(cpp-lookup Catch2)
