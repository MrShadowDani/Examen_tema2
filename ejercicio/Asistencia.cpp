#include "Asistencia.h"

void RegistroAsistencia::registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
    Asistencia nuevaAsistencia{fecha, materia, estado};
    asistencias.push_back(nuevaAsistencia);
}

void RegistroAsistencia::mostrarAsistencias() {
    for (const auto& asistencia : asistencias) {
        std::cout << "Fecha: " << asistencia.fecha << ", ";
        std::cout << "Materia: " << asistencia.materia << ", ";
        std::cout << "Estado: " << asistencia.estado << std::endl;
    }
}