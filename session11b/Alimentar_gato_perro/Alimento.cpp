#include "Alimento.h"
Alimento::Alimento(TipoString pNombre, TipoEntero pCantidad) {
    m_Nombre = pNombre;
    m_Cantidad = pCantidad;
}
Alimento::~Alimento() {

}
TipoEntero Alimento::getCantidad() {
    return m_Cantidad;
}
TipoString Alimento::getNombre() {
    return  m_Nombre;
}