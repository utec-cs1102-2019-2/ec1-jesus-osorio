#include "Perro.h"

Perro::Perro(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento) : Animal(pNombre, pPeso, pCantAlimento) {
}
Perro::~Perro() {}

void Perro::ProduceSonido(ostream &os) {
    os<<m_Nombre<<" el perro dijo: BauBau"<<endl;
}
void Perro::Menea(ostream &os){
    os<<m_Nombre<<" menea su cola"<<endl;
}
void Perro::Alimentar(ostream &os,Alimento* pAlimento) {
    if(pAlimento->getNombre()=="Carne" ||pAlimento->getNombre()=="Verdura"){
        float cantAlimento = 0.4 * pAlimento->getCantidad();
        m_Peso +=cantAlimento;
        m_CantAlimento+=pAlimento->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pAlimento->getNombre()<<" y su peso actual es: "<<m_Peso<<endl;
    }
    else{
        cout<<m_Nombre<<" el perro no quiere comer "<<pAlimento->getNombre()<<endl;
    }
}