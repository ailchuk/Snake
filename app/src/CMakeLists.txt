cmake_minimum_required(VERSION 3.1)

project(src)

include_directories(../../3dparty/sfml/include/)

set(SOURCE_EXE snake.cpp menu.cpp menu_utils.cpp game.cpp utils.cpp food.cpp)

add_library(src STATIC ${SOURCE_EXE})
