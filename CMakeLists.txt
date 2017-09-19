cmake_minimum_required(VERSION 3.8)
project(OOP345_week2_note)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DString.h DString.cpp)
add_executable(OOP345_week2_note ${SOURCE_FILES} DString.h DString.cpp)