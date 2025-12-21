cmake_minimum_required(VERSION 4.1.2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti -nostdlib++)

add_subdirectory(runtime)
add_subdirectory(lib)
