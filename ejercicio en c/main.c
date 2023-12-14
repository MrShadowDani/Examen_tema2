#include "Estudiante_C.h" // Incluye el archivo de encabezado que contiene las definiciones de las funciones y la estructura Estudiante

int main() {
    // Creación de un estudiante y asignación de valores iniciales
    struct Estudiante estudiante1 = {"Juan", 20, 8.5f, (char*[]){"Matematicas", "Historia"}, 2};

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

    return 0;
}

