cmake_minimum_required(VERSION 3.28.3)
project(dywoqstl_lib)

file(GLOB_RECURSE SOURCES src/*.cxx src/**/*.cxx)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_compile_options(${PROJECT_NAME} PRIVATE -fno-exceptions -fno-rtti)
target_link_options(${PROJECT_NAME} PRIVATE -nostdlib++)

add_executable(${PROJECT_NAME}_tests tests/main.cxx)
