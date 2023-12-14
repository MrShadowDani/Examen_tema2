//
// Created by danij on 14/12/2023.
//

#ifndef EJERCICIO_ESTUDIANTE_H
#define EJERCICIO_ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
};

void mostrarEstudiante(const Estudiante& estudiante);

#endif //EJERCICIO_ESTUDIANTE_H