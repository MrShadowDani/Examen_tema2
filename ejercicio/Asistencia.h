#ifndef EJERCICIO_ASISTENCIA_H
#define EJERCICIO_ASISTENCIA_H

#include <iostream>
#include <string>
#include <vector>

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

class RegistroAsistencia {
private:
    std::vector<Asistencia> asistencias;

public:
    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado);
    void mostrarAsistencias();
};

#endif //EJERCICIO_ASISTENCIA_H
