#include <iostream>
using namespace std;
#include "Bote.h"
#include <ctime>
Bote::Bote() {
    int r;
    posX = 0;
    posY =0;
    VelocidadMinima=0;
    VelocidadMaxima=137;
    VelocidadActual=VelocidadMinima+ (rand()%(VelocidadMaxima+VelocidadMinima+1));
    srand(time(nullptr));
}
void Bote::avanzar() {
    Vehiculo::avanzar();
    cout << "Avanzado" << endl;
    cout << "Desde:" << posX << "," << posY;
    posX = posX + VelocidadActual;
    cout << "Hasta" << posX << "," << posY;
}
void Bote::retroceder(){
    Vehiculo::retroceder();
    posX=posX - VelocidadActual;
    cout<<"Hasta: "<<posX;
}