#include <iostream>
#include <vector>
#include <string>
#include "Estudiante.h"

void Estudiante::agregarMateria(const std::string& materia) {
    materias.push_back(materia);
}

void Estudiante::eliminarMateria(const std::string& materia) {
    // Eliminar la materia si existe
    auto it = std::find(materias.begin(), materias.end(), materia);
    if (it != materias.end()) {
        materias.erase(it);
    }
}

void Estudiante::mostrarMaterias() {
    std::cout << "Materias: ";
    for (const auto& materia : materias) {
        std::cout << materia << ", ";
    }
    std::cout << std::endl;
}

void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
    estudiante.mostrarMaterias();
}

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Juan";
    estudiante.edad = 20;
    estudiante.promedio = 8.5;
    estudiante.materias = {"Matematicas", "Historia", "Fisica"};

    mostrarEstudiante(estudiante);

    // Agregar una materia
    estudiante.agregarMateria("Quimica");
    std::cout << "Después de agregar Quimica:" << std::endl;
    mostrarEstudiante(estudiante);

    // Eliminar una materia
    estudiante.eliminarMateria("Historia");
    std::cout << "Después de eliminar Historia:" << std::endl;
    mostrarEstudiante(estudiante);

    return 0;
}