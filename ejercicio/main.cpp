#include <iostream>
#include "Estudiante.h"

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Juan";
    estudiante.edad = 20;
    estudiante.promedio = 8.5;
    estudiante.materias = {"Matematicas", "Historia", "Fisica"};

    mostrarEstudiante(estudiante);

    return 0;
}