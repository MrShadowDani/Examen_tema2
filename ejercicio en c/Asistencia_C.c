#include "Asistencia_C.h"

void registrarAsistencia(struct RegistroAsistencia* registro, const char* fecha, const char* materia, const char* estado) {
    registro->asistencias = realloc(registro->asistencias, (registro->num_asistencias + 1) * sizeof(struct Asistencia));

    strcpy(registro->asistencias[registro->num_asistencias].fecha, fecha);
    strcpy(registro->asistencias[registro->num_asistencias].materia, materia);
    strcpy(registro->asistencias[registro->num_asistencias].estado, estado);

    registro->num_asistencias++;
}

void mostrarAsistencias(struct RegistroAsistencia registro) {
    for (int i = 0; i < registro.num_asistencias; ++i) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n", registro.asistencias[i].fecha, registro.asistencias[i].materia, registro.asistencias[i].estado);
    }
}