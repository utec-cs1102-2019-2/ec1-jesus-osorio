#include <iostream>
#include "Tablero.h"
using namespace std;
int main() {
    Tablero *buscaminas = new Tablero(3,4);
    buscaminas->instalar_minas();
    buscaminas->mostrar();
    buscaminas->contar_minas();
    return 0;
}