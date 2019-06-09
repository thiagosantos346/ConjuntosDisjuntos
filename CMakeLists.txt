cmake_minimum_required(VERSION 3.14)
project(ConjuntosDisjuntos)

set(CMAKE_CXX_STANDARD 14)

add_executable(ConjuntosDisjuntos main.cpp Types/Elemento.cpp Types/Elemento.h Types/Conjunto.cpp Types/Conjunto.h UnionFind.cpp UnionFind.h)