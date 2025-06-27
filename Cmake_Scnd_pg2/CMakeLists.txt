cmake_minimum_required(VERSION 3.10)
project(Dimension
    VERSION 0.0.1
    DESCRIPTION "A simple addition library"
    LANGUAGES CXX
)
#file(GLOB_RECURSE HEADER_FILES include/*.h)
#file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(dimension_pg main.cpp src/circle.cpp src/tri.cpp 
    src/rectangle.cpp)
target_compile_features(dimension_pg PRIVATE cxx_std_17)
target_include_directories(dimension_pg PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}include)
