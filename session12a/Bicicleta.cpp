#include "Bicicleta.h"
#include <iostream>
#include <ctime>
using namespace std;
Bicicleta::Bicicleta() {
    int r;
    posX = 0;
    posY =0;
    VelocidadMinima=0;
    VelocidadMaxima=137;
    VelocidadActual=VelocidadMinima+ (rand()%(VelocidadMaxima+VelocidadMinima+1));
    srand(time(nullptr));
    }
void Bicicleta::avanzar() {
    Vehiculo::avanzar();
    cout << "Avanzado" << endl;
    cout << "Desde:" << posX << "," << posY;
    posX = posX + VelocidadActual;
    cout << "Hasta" << posX << "," << posY;
}
void Bicicleta::retroceder(){
Vehiculo::retroceder();
posX=posX - VelocidadActual;
cout<<"Hasta: "<<posX;
}