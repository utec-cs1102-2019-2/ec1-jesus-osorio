#include <iostream>
using namespace std;
typedef double Tnumero;
int main() {
    Tnumero *pnumero1 = nullptr, *pnumero2 = nullptr;

    pnumero1 = new double;
    pnumero2 = new double;
    cout << "Numero1: ";
    cin >> *pnumero1;//-- se lee el numero en el sitio apuntado por el puntero
    cout << "Numero2: ";
    cin >> *pnumero2;
    cout << "\n";
    cout << "La suma es      :" << *pnumero1 + *pnumero2 << "\n";
    cout << "La diferencia es:" << *pnumero1 - *pnumero2 << "\n";
    cout << "El producto es  :" << *pnumero1 * *pnumero2 << "\n";
    delete pnumero1;
    delete pnumero2;
    pnumero1 = nullptr;
    pnumero2 = nullptr;
    return 0;
}





// Created by Jesus on 19/09/2019.
//

