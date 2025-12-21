cmake_minimum_required(VERSION 4.1.2)
project(dywoqstl_lib)

file(GLOB SOURCES src/*.cxx)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
