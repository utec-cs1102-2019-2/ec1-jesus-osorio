#ifndef EJERCICIO_2_UFUNCIONES_H
#define EJERCICIO_2_UFUNCIONES_H
#include "Mago.h"
#include "Comida.h"
template <typename T>
void mostrarDatosBasicos(ostream &os,T* &objeto) {
    os << "\n------- Datos ------\n";
    os << "Nombre : " << objeto->getNombre() << endl;
    os << "Cantidad Comida: " << objeto->getCantComida() << endl;
    os << "Puntaje : " << objeto->getPuntos() << endl;
}
#endif //EJERCICIO_2_UFUNCIONES_H
