cmake_minimum_required(VERSION 3.12)
project(pybind-singleton)

cmake_policy(SET CMP0148 NEW)
set(CMAKE_CXX_STANDARD 17)

find_package(pybind11 CONFIG REQUIRED)
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)

add_library(my_lib SHARED
    src/Singleton.cpp
)

message(STATUS "Python include dirs: " ${PYTHON_INCLUDE_DIRS})
message(STATUS "pybind include dirs: " ${pybind11_INCLUDE_DIRS})
target_include_directories(my_lib PUBLIC include ${PYTHON_INCLUDE_DIRS} ${pybind11_INCLUDE_DIRS})
target_link_libraries(my_lib PUBLIC Python3::Python)

pybind11_add_module(my_module src/binding.cpp)
target_link_libraries(my_module PRIVATE my_lib)


add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE my_lib)