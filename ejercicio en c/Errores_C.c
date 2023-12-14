#include <stdio.h>
#include <stdbool.h>

bool validarMateria(const char* materia) {
    // Simulación de una lista de materias registradas
    const char* materiasRegistradas[] = {"Matemáticas", "Historia", "Física"};
    int numMaterias = sizeof(materiasRegistradas) / sizeof(materiasRegistradas[0]);

    for (int i = 0; i < numMaterias; ++i) {
        if (strcmp(materiasRegistradas[i], materia) == 0) {
            return true; // La materia está registrada
        }
    }

    return false; // La materia no está registrada
}
int strcmp(const char *str1, const char *str2);
int main() {
    const char* materia = "Química"; // Materia no registrada
    if (!validarMateria(materia)) {
        printf("Error: Materia no registrada.\n");
        // Aquí podrías manejar la situación de error específica
    }

    return 0;
}
