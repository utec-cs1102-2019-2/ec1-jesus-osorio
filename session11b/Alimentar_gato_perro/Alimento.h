#ifndef SESSION11B_ALIMENTO_H
#define SESSION11B_ALIMENTO_H
#include "Tipos.h"
class Alimento {
protected:
    TipoString m_Nombre;
    TipoEntero m_Cantidad;
public:
    Alimento(TipoString, TipoEntero);
    ~Alimento();
    TipoEntero getCantidad();
    TipoString getNombre();
};


#endif //SESSION11B_ALIMENTO_H
