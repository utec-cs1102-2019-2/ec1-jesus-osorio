#include "Animal.h"
#include "UFunciones.h"
Animal::Animal(TipoString pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento) {
    m_Nombre = pNombre;
    m_Peso=pPeso;
    m_CantAlimento = pCantAlimento;
}
Animal::Animal() {}
Animal::~Animal() {}
TipoString Animal::getNombre(){
    return m_Nombre;
}
TipoDecimal Animal::getPeso(){
    return m_Peso;
}
TipoEntero Animal::getCantAlimento(){
    return m_CantAlimento;
}