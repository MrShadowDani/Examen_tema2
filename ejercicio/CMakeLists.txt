cmake_minimum_required(VERSION 3.26)
project(ejercicio)

set(CMAKE_CXX_STANDARD 17)

add_executable(ejercicio main.cpp
        Estudiante.cpp
        Estudiante.h
        Asistencia.cpp
        Asistencia.h
        Excepciones.h)
