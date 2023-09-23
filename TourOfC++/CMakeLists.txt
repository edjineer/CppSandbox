# https://cliutils.gitlab.io/modern-cmake/chapters/basics/example.html

cmake_minimum_required(VERSION 3.14)

#Project Statement 
project(
    SimpleSample
    VERSION 1.0
    DESCRIPTION "Simple Sample Project for CMake and CPP"
    LANGUAGES CXX
)

# add_library()
add_executable(Runner src/main.cpp )

target_link_libraries()