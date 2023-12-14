#include "Estudiante_C.h"
#include <stdio.h>

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    printf("Materias:\n");
    for (int i = 0; i < estudiante.num_materias; ++i) {
        printf("- %s\n", estudiante.materias[i]);
    }
}
void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    estudiante->materias = realloc(estudiante->materias, (estudiante->num_materias + 1) * sizeof(char*));
    estudiante->materias[estudiante->num_materias] = malloc(strlen(materia) + 1);
    strcpy(estudiante->materias[estudiante->num_materias], materia);
    estudiante->num_materias++;
}

void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    for (int i = 0; i < estudiante->num_materias; ++i) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            free(estudiante->materias[i]);
            for (int j = i; j < estudiante->num_materias - 1; ++j) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }
            estudiante->num_materias--;
            estudiante->materias = realloc(estudiante->materias, estudiante->num_materias * sizeof(char*));
            break;
        }
    }
}

void mostrarMaterias(struct Estudiante estudiante) {
    printf("Materias: ");
    for (int i = 0; i < estudiante.num_materias; ++i) {
        printf("%s, ", estudiante.materias[i]);
    }
    printf("\n");
}