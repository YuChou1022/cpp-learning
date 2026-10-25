cmake_minimum_required(VERSION 3.24)
project(QtFirst LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(QtFirst WIN32 main.cpp)
target_link_libraries(QtFirst PRIVATE Qt6::Widgets)

if(MSVC)
    target_compile_options(QtFirst PRIVATE /utf-8)
endif()