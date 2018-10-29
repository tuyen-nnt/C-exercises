cmake_minimum_required(VERSION 3.12)
project(BT4_2 C)

set(CMAKE_C_STANDARD 99)
add_executable(BT4_2 main.c)

# https://stackoverflow.com/questions/44073120/c-cmake-setup-undefined-reference-to-pow-despite-lm
target_link_libraries(BT4_2 m)
