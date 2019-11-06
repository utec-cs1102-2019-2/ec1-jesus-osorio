#ifndef EJERCICIO_2_COMIDA_H
#define EJERCICIO_2_COMIDA_H

#include <iostream>
using namespace std;

class Comida {
private:
    string nombre;
    int puntos;
public:

    Comida(string, int);
    ~Comida();
    int getpuntos();
    string getnombre();
};


#endif //EJERCICIO_2_COMIDA_H
