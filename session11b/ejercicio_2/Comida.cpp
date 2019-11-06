#include "Comida.h"
Comida::Comida(string, int) {
    nombre = pnombre;
    puntos = ppuntos;
}


Comida::~Comida() {

}
int Comida::getpuntos() {
    return puntos;
}
string Comida::getnombre() {
    return  nombre;
}