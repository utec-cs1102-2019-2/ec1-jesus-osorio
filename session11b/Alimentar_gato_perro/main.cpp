#include "UFunciones.h"
int main() {
    auto pCarne = new Alimento("Carne",4);
    auto pVerdura = new Alimento("Verdura",4);
    auto pFelix = new Gato("Felix",4,0);
    pFelix->Alimentar(cout,pCarne);
    auto pTom = new Gato("Tom",5,0);
    pTom->Alimentar(cout,pVerdura);

    auto pBoby = new Perro("Boby",4,0);
    pBoby->Alimentar(cout,pVerdura);
    pBoby->Alimentar(cout,pVerdura);
    pBoby->Alimentar(cout,pVerdura);
    mostrarDatosBasicos(cout,pFelix);
    mostrarDatosBasicos(cout,pBoby);
    mostrarDatosBasicos(cout,pTom);
    return 0;
}