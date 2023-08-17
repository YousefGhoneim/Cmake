cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add library target
add_library(WriteInFile STATIC library/WriteInFile.cpp)

# Add executable target
add_executable(program src/main.cpp src/Print.cpp)

# Link the executable with the library
target_link_libraries(program WriteInFile)

# Define executable output directory
set_target_properties(program PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Installation
install(TARGETS program DESTINATION bin)
