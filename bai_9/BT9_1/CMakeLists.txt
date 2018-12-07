cmake_minimum_required(VERSION 3.12)
project(BT9_1 C)

set(CMAKE_C_STANDARD 99)

add_executable(BT9_1 main.c)

# https://stackoverflow.com/questions/40196373/how-i-add-math-h-library-to-cmake
target_link_libraries(BT9_1 m)
