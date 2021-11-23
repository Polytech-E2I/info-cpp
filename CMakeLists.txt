cmake_minimum_required(VERSION 3.16)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

set(CMAKE_BUILD_PARALLEL_LEVEL 8)

project(E2I4_CPP VERSION 1.0 LANGUAGES CXX)
add_compile_options(-std=c++17 -g -Wall -Wextra -Werror -Wsign-conversion -pedantic-errors)

add_library(matrix STATIC
    customlibs/matrix/matrix.hpp
    customlibs/matrix/matrix.cpp
)

file(GLOB TP_dirs CONFIGURE_DEPENDS "TP*")

foreach(TP_dir ${TP_dirs})
    file(GLOB Exo_dirs CONFIGURE_DEPENDS "${TP_dir}/Exo*")

    foreach(Exo_dir ${Exo_dirs})
        add_subdirectory(${Exo_dir})
    endforeach()
endforeach()