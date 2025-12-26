find_package(GTest REQUIRED)

# Runtime
file(GLOB_RECURSE TEST_RUNTIME_SOURCES runtime/*.cxx runtime/**/*.cxx)
add_executable(tests_runtime ${TEST_RUNTIME_SOURCES})
target_link_libraries(tests_runtime PRIVATE GTest::gtest GTest::gtest_main)
add_test(NAME TESTS_RUNTIME COMMAND tests_runtime)

# Lib
file(GLOB_RECURSE TEST_LIB_SOURCES lib/*.cxx lib/**/*.cxx)
add_executable(tests_lib ${TEST_LIB_SOURCES})
target_link_libraries(tests_lib PRIVATE GTest::gtest GTest::gtest_main)
add_test(NAME TESTS_LIB COMMAND tests_lib)

# Core
file(GLOB_RECURSE TEST_CORE_SOURCES core/*.cxx core/**/*.cxx)
add_executable(tests_core ${TEST_CORE_SOURCES})
target_link_libraries(tests_core PRIVATE GTest::gtest GTest::gtest_main)
add_test(NAME TESTS_CORE COMMAND tests_core)
