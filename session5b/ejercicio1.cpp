#include <iostream>
using namespace std;

int varGlobal = 20;
int varGloba2 = 20;
int varGloba3 = 20;
int varGloba4 = 20;
int varGloba5 = 20;

int main() {
    cout << "Ejercicio1" << endl;
    int var_local = 10;
    int *ptr_var_local = &var_local;
    *ptr_var_local = 20;
    cout << var_local << "\n";
    return 0;
}
//
// Created by Jesus on 19/09/2019.
//

