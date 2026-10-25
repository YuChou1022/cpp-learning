cmake_minimum_required(VERSION 3.21)

project(HelloResearch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(stage0 src/main.cpp src/greet.cpp "include/ResearchProject.h" "src/ResearchProject.cpp")

target_include_directories(stage0 PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)