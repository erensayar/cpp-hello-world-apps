cmake_minimum_required(VERSION 3.18)
project(cpm_example)
set(CMAKE_CXX_STANDARD 23)
add_executable(cpm_example src/main.cpp)
include(CPM.cmake)

CPMAddPackage(
        NAME spdlog
        GITHUB_REPOSITORY gabime/spdlog
        VERSION 1.7.0)

target_link_libraries(cpm_example spdlog)