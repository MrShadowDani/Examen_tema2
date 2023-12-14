#ifndef EJERCICIO_EXCEPCIONES_H
#define EJERCICIO_EXCEPCIONES_H

#include <iostream>
#include <stdexcept>

class FormatoFechaInvalido : public std::exception {
public:
    const char* what() const noexcept override {
        return "Formato de fecha inválido.";
    }
};

class MateriaNoRegistrada : public std::exception {
public:
    const char* what() const noexcept override {
        return "Materia no registrada.";
    }
};


#endif //EJERCICIO_EXCEPCIONES_H
