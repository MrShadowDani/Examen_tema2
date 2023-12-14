#include "Estudiante_C.h"

int main() {
    struct Estudiante estudiante1 = {"Juan", 20, 8.5, (char*[]){"Matematicas", "Historia"}, 2};
    mostrarEstudiante(estudiante1);

    return 0;
}
