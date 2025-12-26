cmake_minimum_required(VERSION 3.28.3)
project(dywoqcxx LANGUAGES CXX)

# Configuration

# Base
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
file(GLOB_RECURSE CORE_SOURCES src/core/**/*.cxx src/runtime/*.cxx)
file(GLOB_RECURSE RUNTIME_SOURCES src/runtime/**/*.cxx src/runtime/*.cxx)
file(GLOB_RECURSE LIB_SOURCES src/lib/**/*.cxx src/lib/*.cxx)

# Building

# Binary
add_library(${PROJECT_NAME} STATIC ${CORE_SOURCES} ${RUNTIME_SOURCES} ${LIB_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include/)
target_compile_options(${PROJECT_NAME} PRIVATE -fno-exceptions -fno-rtti)

# Tests
enable_testing()
add_subdirectory(tests)
