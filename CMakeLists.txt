cmake_minimum_required(VERSION 3.10)
project(ReadLastNLines)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the output directories for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the source files from the src directory
add_executable(read_last_n_lines src/read_last_n_lines.cpp)

# Add compiler flags
target_compile_options(read_last_n_lines PRIVATE -Wall -Wextra -Werror -Wpedantic)
