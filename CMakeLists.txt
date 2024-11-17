get_filename_component(PROJECT_DIR_NAME ${CMAKE_SOURCE_DIR} NAME)
cmake_minimum_required(VERSION 3.15)

set(CMAKE_TOOLCHAIN_FILE $ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

if(NOT DEFINED VCPKG_TARGET_TRIPLET)
    message(WARNING "VCPKG_TARGET_TRIPLET not defined, using default")
endif()

project(${PROJECT_DIR_NAME} LANGUAGES C CXX)


add_subdirectory("pkgs")
