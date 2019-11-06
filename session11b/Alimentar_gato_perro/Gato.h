#ifndef SESSION11B_GATO_H
#define SESSION11B_GATO_H


#include "Tipos.h"
#include "Animal.h"
class Gato:
        public Animal {
private:
    TipoEntero m_Vidas;

public:
    Gato(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    virtual ~Gato();
    TipoEntero getVidas();
    void ProduceSonido(ostream &os);
    void setVidas(TipoEntero pVidas);
    void Alimentar(ostream &os,Alimento* pAlimento);
    void Ronroneo(ostream &os);
};


#endif //SESSION11B_GATO_H
