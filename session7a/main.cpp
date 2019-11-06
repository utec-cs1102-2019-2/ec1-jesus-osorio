#include <iostream>
using namespace std;
int main() {
    int filas,columnas;
    cout<<"Numero de filas: ";
    cin>>filas;
    cout<<"Numero de columnas: ";
    cin>>columnas;
    int **matriz=new int*[filas];
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = rand()% 10;
            cout<<matriz[filas][columnas];
        }
    }


    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<matriz[filas][columnas];
        }
    }
    for (int i=0;i<filas;i++){
        cout<<i;
    }
    for (int j=0;j<columnas;j++){
        cout<<j;
    }



    int matriz_2 [][];
    for




    return 0;
}