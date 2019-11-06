#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include <vector>
using namespace std;
int main() {
    Bicicleta *b1 = new Bicicleta();
    b1->avanzar();
    b1->avanzar();
    vector<Bicicleta> bicicletas;
    bicicletas.push_back(*b1);
    return 0;
}