
#include "cilindro.h"
#include <math.h>
using namespace std;
int main() {
    cilindro::cilindro(float radio, float altura){
        this->radio = radio;
        this->altura = altura;
    }
    float cilindro::volumen() {
        return pi*radio * radio * altura;}

    float cilindro::atotal() {
        float area_base =pi*(radio**2);
        float area_lateral=altura*2*pi*radio;
        return area_base+area_lateral;
    }
    float cilindro::alateral() {
        return altura*2*pi*radio;
    }
}

//
// Created by Jesus on 16/10/2019.
//

#include "cilindro.h"
