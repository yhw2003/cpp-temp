get_filename_component(PROJECT_DIR_NAME ${CMAKE_SOURCE_DIR} NAME)
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)


project(${PROJECT_DIR_NAME} LANGUAGES C CXX)

find_package(fmt REQUIRED)

add_subdirectory("pkgs")
