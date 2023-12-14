#include "Estudiante.h"
#include "Asistencia.h"
#include "Excepciones.h"
#include <iostream>

int main() {
    // Ejemplo de uso de la clase Estudiante
    Estudiante estudiante;
    estudiante.nombre = "Juan";
    estudiante.edad = 20;
    estudiante.promedio = 8.5;

    estudiante.agregarMateria("Matemáticas");
    estudiante.agregarMateria("Historia");
    estudiante.mostrarMaterias(); // Muestra las materias del estudiante

    // Ejemplo de uso de la clase RegistroAsistencia
    RegistroAsistencia registro;

    registro.registrarAsistencia("2023-12-01", "Matemáticas", "Asistió");
    registro.registrarAsistencia("2023-12-01", "Historia", "Falta");
    registro.mostrarAsistencias(); // Muestra la asistencia registrada

    // Ejemplo de uso de excepciones personalizadas
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
