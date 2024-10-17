cmake_minimum_required(VERSION 3.24.3)

project(cgpa VERSION 1.0.0 DESCRIPTION "Just for fun.")

# Find pybind11 installed in the system
add_subdirectory(pybind11)

# Find Python3 interpreter and development files
find_package(Python3 REQUIRED COMPONENTS Interpreter Development)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create Python module
pybind11_add_module(cgpa cgpa.cpp)

# Link the Python libraries
target_link_libraries(cgpa PRIVATE Python3::Python)