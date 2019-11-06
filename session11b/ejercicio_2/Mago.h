#ifndef EJERCICIO_2_MAGO_H
#define EJERCICIO_2_MAGO_H

#include "tipos.h"
#include "Comida.h"
#include "Estado_Animo.h"
class Mago{
private:
    TipoEntero m_puntos;

public:
    Mago(TipoString pNombre,TipoEntero pComida);
    virtual ~Mago();
    TipoEntero getPuntos();
    void setPuntos(TipoEntero pPuntos);
    void Alimentar(ostream &os,Comida* pComida);
    };

#endif //EJERCICIO_2_MAGO_H
