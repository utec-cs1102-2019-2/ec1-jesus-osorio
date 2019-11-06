#include <iostream>
#include <stdlib.h>
using namespace std;
void crear_array();
int n_elemetos, *elementos,nuevo,indice;
int nuevo_valor( nuevo, indice);
int main() {
    crear_array();
    nuevo_valor(nuevo,indice);
    delete[] elementos;
    return 0;
}
void crear_array(){
    cout<<"Ingrese el numero de elementos: ";
    cin>>n_elemetos;
    elementos=new int[n_elemetos];
    for (int i=0;i<n_elemetos;i++){
        elementos[i]=rand()%101;}
    for (int i=0;i<n_elemetos;i++){
        cout<<elementos[i]<<" ";
    }
}
void nuevo_valor(nuevo,indice){
    cout<<"\nIngrese posiciona cambiar(-1 para finalizar)";
    cin>>indice
    if (indice!=-1){
        cout<<"Ingrese nuevo valor"
        cin>>nuevo
        elementos[indice]=nuevo
    }
    else{
        break;
    }
}
