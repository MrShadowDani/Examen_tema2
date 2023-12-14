#include "Estudiante_C.h"
#include "Asistencia_C.h"
#include <stdio.h>

int main() {
    // Creación de un estudiante y asignación de valores iniciales
    struct Estudiante estudiante1 = {"Juan", 20, 8.5f, (char*[]){"Matemáticas", "Historia"}, 2};

    // Mostrar detalles del estudiante utilizando la función mostrarEstudiante
    mostrarEstudiante(estudiante1);

    // Agregar una nueva materia al estudiante
    agregarMateria(&estudiante1, "Biología");

    // Mostrar las materias actualizadas después de agregar Biología
    mostrarMaterias(estudiante1);

    // Eliminar la materia "Historia" del estudiante
    eliminarMateria(&estudiante1, "Historia");

    // Mostrar las materias actualizadas después de eliminar Historia
    mostrarMaterias(estudiante1);

    // Crear un registro de asistencias
    struct RegistroAsistencia registro;
    registro.asistencias = NULL; // Inicializar el registro sin asistencias
    registro.num_asistencias = 0;

    // Registrar una asistencia
    registrarAsistencia(&registro, "2023-12-15", "Matemáticas", "Presente");

    // Mostrar las asistencias registradas
    mostrarAsistencias(registro);

    return 0;
}


