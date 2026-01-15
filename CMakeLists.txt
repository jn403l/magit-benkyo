cmake_minimum_required(VERSION 3.5)
project(main VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} src/main.cpp src/calc.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
