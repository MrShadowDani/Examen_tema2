#ifndef EJERCICIO_EN_C_ASISTENCIA_C_H
#define EJERCICIO_EN_C_ASISTENCIA_C_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[10];
};

struct RegistroAsistencia {
    struct Asistencia* asistencias;
    int num_asistencias;
};

void registrarAsistencia(struct RegistroAsistencia* registro, const char* fecha, const char* materia, const char* estado);
void mostrarAsistencias(struct RegistroAsistencia registro);

#endif //EJERCICIO_EN_C_ASISTENCIA_C_H
