#include <iostream>
using namespace std;
void imprimir(int filas, int columnas,int matriz[]);
int main(){

    int filas=0;
    int columnas=0;
    cin>>filas;
    cin>>columnas;
    int**matriz=nullptr ;
    matriz=new int*[filas];
    for(int i=0;i<filas;i++){
        matriz[i]=new int[columnas];
        for(int j=0;j<columnas;j++){
            matriz[i][j]=rand()%100;
        }
    }

}





//
// Created by Jesus on 26/09/2019.
//

