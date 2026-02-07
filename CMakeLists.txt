cmake_minimum_required(VERSION 3.19)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.12.0
)

FetchContent_MakeAvailable(json)

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE nlohmann_json::nlohmann_json)

# Testing
include(CTest)
enable_testing()

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.17.0
)
# Prevent overriding the parent project's compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(hello_test tests/tests.cpp)
target_link_libraries(hello_test PRIVATE gtest_main)
add_test(NAME hello_test COMMAND hello_test)
