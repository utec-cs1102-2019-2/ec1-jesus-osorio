#include "Comida.h"
#include "Tipos.h"
Comida::Comida(TipoString pNombre, TipoEntero pCantidad) {
    m_Nombre = pNombre;
    m_Cantidad = pCantidad;
}
Comida::~Comida() {

}
TipoEntero Comida::getCantidad() {
    return m_Cantidad;
}
TipoString Comida::getNombre() {
    return  m_Nombre;