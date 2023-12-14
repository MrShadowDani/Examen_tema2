#include <algorithm>
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
