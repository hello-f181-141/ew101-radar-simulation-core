cmake_minimum_required(VERSION 3.16)
project(ew101_simulation_core VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(ew_core
    src/RadarEwMath.cpp
    include/ew/RadarEwMath.hpp
)

add_executable(ew_sim tests/main.cpp)
target_link_libraries(ew_sim PRIVATE ew_core)