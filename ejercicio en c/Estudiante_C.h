#ifndef EJERCICIO_EN_C_ESTUDIANTE_C_H
#define EJERCICIO_EN_C_ESTUDIANTE_C_H

#include <stdio.h>
#include <stdlib.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char** materias;
    int num_materias;
};

void mostrarEstudiante(struct Estudiante estudiante);
void agregarMateria(struct Estudiante* estudiante, const char* materia);
void eliminarMateria(struct Estudiante* estudiante, const char* materia);
void mostrarMaterias(struct Estudiante estudiante);

#endif //EJERCICIO_EN_C_ESTUDIANTE_C_H
