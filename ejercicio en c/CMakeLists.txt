cmake_minimum_required(VERSION 3.26)
project(ejercicio_en_c)

set(CMAKE_CXX_STANDARD 17)

add_executable(main.c
        Estudiante_C.c Estudiante_C.h
        main.c
        Asistencia_C.c
        Asistencia_C.h
)
