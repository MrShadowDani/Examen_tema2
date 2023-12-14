#include "Estudiante_C.h"

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    printf("Materias: ");
    for (int i = 0; i < estudiante.num_materias; ++i) {
        printf("%s, ", estudiante.materias[i]);
    }
    printf("\n");
}
