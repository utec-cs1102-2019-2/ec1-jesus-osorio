#include <iostream>
using namespace std;
int main(){
    int matriz[10][10];
    int filas;
    int columnas;

    columnas=10;
    filas=10;
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            matriz[i][j]=1;
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
}