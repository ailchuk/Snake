cmake_minimum_required(VERSION 3.1)

project(snake LANGUAGES CXX)

set(SOURCE_EXE main.cpp)

add_subdirectory(src)

include_directories(../3dparty/SFML/include/SFML/)

add_compile_options(
        -std=c++17
        -Wno-unused-parameter
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)

add_executable(snake ${SOURCE_EXE})

target_link_libraries (snake sfml-graphics sfml-window sfml-system src)
