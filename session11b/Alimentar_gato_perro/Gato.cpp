#include "Gato.h"
Gato::Gato(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento) : Animal(pNombre, pPeso, pCantAlimento) {
}
Gato::~Gato() {}
int Gato::getVidas()  {
    return m_Vidas;
}
void Gato::setVidas(TipoEntero pVidas) {
    Gato::m_Vidas = pVidas;
}

void Gato::ProduceSonido(ostream &os) {
    os<<m_Nombre<<" el gato dijo: Miauuuu"<<endl;
}
void Gato::Ronroneo(ostream &os){
    os<<m_Nombre<<" ronronea"<<endl;
}

void Gato::Alimentar(ostream &os,Alimento* pAlimento) {
    if(pAlimento->getNombre()=="Carne"){
        float cantAlimento = 0.3 * pAlimento->getCantidad();
        m_Peso +=cantAlimento;
        m_CantAlimento+=pAlimento->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pAlimento->getNombre()<<" y su peso actual es: "<<m_Peso<<endl;

    }
    else{
        os<<m_Nombre<<" el gato no quiere comer "<<pAlimento->getNombre()<<endl;
    }
}