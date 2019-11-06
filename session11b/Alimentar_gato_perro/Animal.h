#ifndef SESSION11B_ANIMAL_H
#define SESSION11B_ANIMAL_H
#include "Tipos.h"
#include "Alimento.h"
class Animal {
protected:
    TipoString m_Nombre;
    TipoDecimal m_Peso;
    TipoEntero m_CantAlimento;
public:
    Animal(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    Animal();
    virtual ~Animal();
    TipoString getNombre();
    TipoDecimal getPeso();
    TipoEntero getCantAlimento();
    virtual void ProduceSonido(ostream &os)=0;
    virtual void Alimentar(ostream &os,Alimento* pAlimento)=0;
};


#endif //SESSION11B_ANIMAL_H
