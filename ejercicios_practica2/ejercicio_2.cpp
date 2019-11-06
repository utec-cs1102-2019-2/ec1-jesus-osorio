#include <iostream>
#include <stdlib.h>
using namespace std;
int longitud,*matriz,elemento,mayor=0,menor=100000;
int main(){
    cout<<"ingresar la longitud del arreglo: ";
    cin>>longitud;
    cout<<"Ingresar elementos de la matriz:\n";
    matriz=new int[longitud];
    for (int i=0;i<longitud;i++){
        cin>>elemento;
        matriz[i]=elemento;
    }
    for (int i=0;i<longitud;i++){
        if(matriz[i]>mayor){
            mayor=matriz[i];
        }
    }
    cout<<"el elemento mayor es:"<<mayor;
    for (int i=0;i<longitud;i++){
        if(matriz[i]<menor){
            menor=matriz[i];
        }
    }
    cout<<"\nEl elemento menor es: "<<menor;




    return 0;
}
//
// Created by Jesus on 8/10/2019.
//

