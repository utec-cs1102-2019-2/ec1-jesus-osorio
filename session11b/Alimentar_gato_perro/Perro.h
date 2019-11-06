#ifndef SESSION11B_PERRO_H
#define SESSION11B_PERRO_H

#include "Tipos.h"
#include "Animal.h"

class Perro: public Animal {
private:
public:
    Perro(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    ~Perro();
    void ProduceSonido(ostream &os);
    void Alimentar(ostream &os,Alimento* pAlimento);
    void Menea(ostream &os);
};


#endif