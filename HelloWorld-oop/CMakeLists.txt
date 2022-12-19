cmake_minimum_required(VERSION 3.1)
message("\n########################################################")
message("################## CMAKE IS STARTING ###################")
message("########################################################\n")

# MAIN PROJECT PROPERTIES
# <==============================================================>

# Flag Set - (NOT MANDATORY) (It doesn't have to be)
if (CMAKE_VERSION VERSION_LESS "3.1")  
  if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang|GNU|Intel")
    set(CMAKE_CXX_FLAGS "-std=c++11 -lstdc++ ${CMAKE_CXX_FLAGS}")
  elseif(${CMAKE_CXX_COMPILER_ID} MATCHES "MSVC")
    set(CMAKE_CXX_FLAGS "/std:c++11 ${CMAKE_CXX_FLAGS}")
  endif()
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()

if(WIN32)
    message("WINDOWS OS DETECTED\n")
    SET(COMPILER_PATH C:/mingw64/bin)
    SET(CMAKE_C_COMPILER ${COMPILER_PATH}/gcc.exe CACHE STRING "gcc compiler" FORCE)
    SET(CMAKE_CXX_COMPILER ${COMPILER_PATH}/g++.exe CACHE STRING "g++ compiler" FORCE)
    SET(CMAKE_MAKE_PROGRAM ${COMPILER_PATH}/mingw32-make.exe CACHE STRING "make command" FORCE)
    SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/share/cmake-3.25/Modules)
endif(WIN32)

project(hello-world-oop)


# SET PROJECT FILES
# <==============================================================>
set(SOURCES 
      src/main.cpp
      src/model/Employee.cpp
      src/model/EmployeeAbstract.hpp
      src/model/Developer.cpp)
      
add_executable(hello-world-oop ${SOURCES})