//
// Created by Jesus on 24/10/2019.
//

#ifndef SESSION10B_ALUMNO_H
#define SESSION10B_ALUMNO_H


#include "Persona.h"
class Alumno : public Persona {
private:
    string codigo;
public:
    Alumno(
            string nombre,
            int edad,
            int DNI,
            string nacionalidad,
            string codigo);
    void mostrarAlmumno();

};

#endif //SESSION10B_ALUMNO_H
