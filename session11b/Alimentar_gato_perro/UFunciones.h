#ifndef SESSION11B_UFUNCIONES_H
#define SESSION11B_UFUNCIONES_H
#include "Gato.h"
#include "Perro.h"
template <typename T>
void mostrarDatosBasicos(ostream &os,T* &objeto)
{
    os<<"\n------- Datos ------\n";
    os<<"Nombre : "<<objeto->getNombre()<<endl;
    os<<"Cantidad Comida: "<<objeto->getCantAlimento()<<endl;
    os<<"Peso : "<<objeto->getPeso()<<endl;
    objeto->ProduceSonido(os);
    auto gato= dynamic_cast<Gato*>(objeto);
    if (gato != nullptr)
        gato->Ronroneo(os);
    auto perro= dynamic_cast<Perro*>(objeto);
    if (perro != nullptr)
        perro->Menea(os);
}
#endif