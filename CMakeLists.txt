# CMakeLists.txt
cmake_minimum_required(VERSION 3.15)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

# Add your source files
add_library(MathOperations math_operations.cpp)
add_executable(MyProject main.cpp)
target_link_libraries(MyProject PRIVATE MathOperations)

# Include Catch2 for testing
add_subdirectory(external/catch2)
include_directories(external/catch2/single_include)

# Add your test files
add_executable(MyTests test_main.cpp)
target_link_libraries(MyTests PRIVATE Catch2::Catch2 MathOperations)

