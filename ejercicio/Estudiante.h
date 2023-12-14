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

    void agregarMateria(const std::string& materia);
    void eliminarMateria(const std::string& materia);
    void mostrarMaterias();
};

void mostrarEstudiante(const Estudiante& estudiante);

#endif //EJERCICIO_ESTUDIANTE_H
