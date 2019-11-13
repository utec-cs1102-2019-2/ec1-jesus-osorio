#ifndef SESSION13A_JUGADOR_H
#define SESSION13A_JUGADOR_H

#include <iostream>
#include "Humano.h"
#include "Bot.h"
using namespace std;
class Jugador {
public:
    int numero;
    string nombre;
    virtual marcar(int x,int y)=0;
};


#endif //SESSION13A_JUGADOR_H
