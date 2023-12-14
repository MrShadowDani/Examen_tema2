#include "Estudiante_C.h"
#include <stdio.h>
#include <string.h>

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
    char** temp = realloc(estudiante->materias, (estudiante->num_materias + 1) * sizeof(char*));

    if (temp == NULL) {
        printf("Error: no se pudo asignar memoria para materia adicional.\n");
        return;
    }

    estudiante->materias = temp;

    // Asigna memoria para la nueva materia
    estudiante->materias[estudiante->num_materias] = malloc(strlen(materia) + 1);

    if (estudiante->materias[estudiante->num_materias] == NULL) {
        printf("Error: no se pudo asignar memoria para la nueva materia.\n");
        return;
    }

    strcpy(estudiante->materias[estudiante->num_materias], materia);
    estudiante->num_materias++;
}

void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    int index = -1;
    for (int i = 0; i < estudiante->num_materias; ++i) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            index = i;
            free(estudiante->materias[i]);
            break;
        }
    }

    if (index != -1) {
        for (int j = index; j < estudiante->num_materias - 1; ++j) {
            estudiante->materias[j] = estudiante->materias[j + 1];
        }
        estudiante->num_materias--;
        char** temp = realloc(estudiante->materias, estudiante->num_materias * sizeof(char*));
        if (temp != NULL) {
            estudiante->materias = temp;
        } else {
            printf("Error: no se pudo reducir la memoria asignada para las materias.\n");
            // Manejar el error aquí si es necesario
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