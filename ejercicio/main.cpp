#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Excepciones.h"

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    float promedio;
    vector<string> materias;

    // Constructor que inicializa las variables
    Estudiante(const string& nombre, int edad, float promedio)
            : nombre(nombre), edad(edad), promedio(promedio) {}

    void agregarMateria(const string& materia);
    void eliminarMateria(const string& materia);
    void mostrarMaterias() const;
};

// Resto del código se mantiene igual...


void Estudiante::agregarMateria(const string& materia) {
    materias.push_back(materia);
}

void Estudiante::eliminarMateria(const string& materia) {
    auto it = find(materias.begin(), materias.end(), materia);
    if (it != materias.end()) {
        materias.erase(it);
    }
}

void Estudiante::mostrarMaterias() const {
    cout << "Materias: ";
    for (const auto& materia : materias) {
        cout << materia << ", ";
    }
    cout << endl;
}

void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    estudiante.mostrarMaterias();
}

int main() {
    Estudiante estudiante("Juan", 20, 8.5);
    estudiante.materias = {"Matematicas", "Historia", "Fisica"};

    mostrarEstudiante(estudiante);

    // Agregar una materia
    estudiante.agregarMateria("Quimica");
    cout << "Después de agregar Quimica:" << endl;
    mostrarEstudiante(estudiante);

    // Eliminar una materia
    estudiante.eliminarMateria("Historia");
    cout << "Después de eliminar Historia:" << endl;
    mostrarEstudiante(estudiante);

    try {
        throw FormatoFechaInvalido();
    } catch (const std::exception& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    try {
        throw MateriaNoRegistrada();
    } catch (const std::exception& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
    
    return 0;
}