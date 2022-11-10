cmake_minimum_required(VERSION 2.8)

if (CMAKE_VERSION VERSION_LESS "3.1")
  add_definitions(-std=c++11)
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()

set(COMPILER_PATH C:/MinGW/bin)
SET(CMAKE_C_COMPILER ${COMPILER_PATH}/gcc.exe)
SET(CMAKE_CXX_COMPILER ${COMPILER_PATH}/g++.exe)

project(HelloWorld)

#include_directories(src)

set(SOURCES
	src/main.cpp)
add_executable(HelloWorld ${SOURCES})

install(TARGETS HelloWorld DESTINATION build)