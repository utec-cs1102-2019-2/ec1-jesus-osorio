#include "Mago.h"
#include <Comida.h>
Mago::Mago(TipoString pNombre,TipoEntero pCanComida) : Comida(pNombre, pPuntos, ) {
}
Mago::~Mago() {}
int Mago::getPuntos()  {
    return m_puntos;
}
void Mago::setPuntos(TipoEntero pPuntos) {
    Mago::m_Puntos = pPuntos;
}
void Mago::Alimentar(ostream &os,Comida* pComida) {
    int contador=0;
    if(pComida->getNombre()=="Albarrote"){
        float cantAlimento = 2 * pComida->getCantidad();
        m_CantComida+=pComida->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pComida->getNombre()<<" y su animo actual es: "<<m_Animo<<endl;

    }
    else if
            (pComida->getNombre()=="Lembas"){
        float cantAlimento = 3 * pComida->getCantidad();
        m_CantComida+=pComida->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pComida->getNombre()<<" y su animo actual es: "<<m_Animo<<endl;

    }
    else if:
    else if
            (pComida->getNombre()=="Manzana"){
        float cantAlimento = 1 * pComida->getCantidad();
        m_CantComida+=pComida->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pComida->getNombre()<<" y su animo actual es: "<<m_Animo<<endl;

    }
    else if:


}
}