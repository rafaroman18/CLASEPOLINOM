cmake_minimum_required(VERSION 3.8)
project(CLASEPOLINOM)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES polinom.h polinom.cpp polinom.cpp arit_polinom.h arit_polinom.cpp e_s_polinom.h e_s_polinom.cpp main1.cpp)
add_executable(CLASEPOLINOM ${SOURCE_FILES} polinom.cpp)