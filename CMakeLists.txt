cmake_minimum_required(VERSION 3.25.3)

project(brumski_py VERSION 1.1.0 DESCRIPTION "A Python library made with C++ and Pybind11.")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS False)

set(CMAKE_BUILD_TYPE Release)  
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "-s")
set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "-s")

add_subdirectory(pybind11)

find_package(Python3 REQUIRED COMPONENTS Interpreter Development)

configure_file(brumski_py.h.in ${CMAKE_SOURCE_DIR}/include/brumski_py/brumski_py.h)

#file(GLOB ASCII_SRC ${CMAKE_SOURCE_DIR}/brumski_py/src/ascii/*.cpp)

set(ASCII_SRC
               src/ascii/name.cpp
               src/ascii/A.cpp
               src/ascii/B.cpp
               src/ascii/boolean_functions.cpp
               src/ascii/C.cpp
               src/ascii/D.cpp
               src/ascii/E.cpp
               src/ascii/F.cpp
               src/ascii/G.cpp
               src/ascii/H.cpp
               src/ascii/I.cpp
               src/ascii/J.cpp
               src/ascii/K.cpp
               src/ascii/L.cpp
               src/ascii/M.cpp
               src/ascii/N.cpp
               src/ascii/O.cpp
               src/ascii/P.cpp
               src/ascii/Q.cpp
               src/ascii/R.cpp
               src/ascii/S.cpp
               src/ascii/SPACE.cpp
               src/ascii/T.cpp
               src/ascii/U.cpp
               src/ascii/V.cpp
               src/ascii/W.cpp
               src/ascii/X.cpp
               src/ascii/Y.cpp
               src/ascii/Z.cpp)

set(MATH_SRC
    src/math/area2dshapes.cpp
    src/math/grade_calculator.cpp
    src/school/cgpa.cpp
)

# Enable optional integration and derivatives
option(ADD_DER_INT "Add the integration and derivative libraries" OFF)

if(ADD_DER_INT)
    list(APPEND MATH_SRC src/math/integration.cpp src/math/derivatives.cpp)
endif()

pybind11_add_module(brumski_py 
    src/brumski_py.cpp
    ${ASCII_SRC} 
    ${MATH_SRC}
)

target_include_directories(brumski_py PRIVATE include)

if(ADD_DER_INT)
    target_compile_definitions(brumski_py PUBLIC ADD_DER_INT)
endif()

target_link_libraries(brumski_py PRIVATE Python3::Python)