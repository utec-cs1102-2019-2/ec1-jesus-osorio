#include "Tablero.h"
void Tablero::crearTablero() {
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            tablero[i][j]="*";
        }
    }
}
void Tablero::imprimirTablero() {
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<tablero[i][j];
        }
    }
}


