//
// Created by Jesus on 24/10/2019.
//

#include "Persona.h"
using namespace std;

string Persona::getNombre(){
    return this->nombre;
}
Persona::Persona(string nombre, int edad, int DNI, string nacionalidad) {
    this->nombre=nombre;
    this->edad=edad;
    this-> DNI=DNI;
    this->nacionalidad=nacionalidad;
}
void Persona::mostrarPersona() {
    cout<<"------------PERSONA-----------------"<<endl;
    cout<<"Nombre:\t"<<this->nombre<<endl;
    cout<<"Edad:\t"<<this->edad<<endl;
    cout<<"DNI:\t"<<this->DNI<<endl;
    cout<<"Nacionalidad:\t"<<this->nacionalidad<<endl;
}