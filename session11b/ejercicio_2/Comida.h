#ifndef EJERCICIO_2_COMIDA_H
#define EJERCICIO_2_COMIDA_H
#include "Tipos.h"
#include <iostream>
using namespace std;
class Comida {
protected:
    TipoString m_Nombre;
    TipoEntero m_Cantidad;
public:
    Comida(TipoString, TipoEntero);
    ~Comida();
    TipoEntero getCantidad();
    TipoString getNombre();
};


#endif

#endif //EJERCICIO_2_COMIDA_H
