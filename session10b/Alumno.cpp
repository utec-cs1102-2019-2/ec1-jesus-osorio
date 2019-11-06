#include "Alumno.h"

Alumno::Alumno(
        string nombre,
        int edad,
        int DNI,
        string nacionalidad,
        string codigo) : Persona(nombre, edad, DNI, nacionalidad) {

    this->codigo = codigo;
}

void Alumno::mostrarAlmumno() {
    this->mostrarPersona();
    cout<<"Codigo \t"<<this->codigo<<endl;
}