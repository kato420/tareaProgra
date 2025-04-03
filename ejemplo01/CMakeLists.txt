# CMake version mínima requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MiProyecto CXX)

# Establece el estándar de C++ que se usará
set(CMAKE_CXX_STANDARD 17)

# Agrega el archivo fuente
add_executable(MiProyecto src/main.cpp)

