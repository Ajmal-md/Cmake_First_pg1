cmake_minimum_required(VERSION 3.10)
project(Addition
    VERSION 0.0.1
    DESCRIPTION "A simple addition library"
    LANGUAGES CXX
)
add_executable(addition_cal main.cpp)
target_compile_features(addition_cal PRIVATE cxx_std_17)