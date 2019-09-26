#include <iostream>
using namespace std;
int calcular_promedio(int n,int notas[]);
int calcular_mayor(int n, int notas[]);
int main() {
   int n=0;
   do{cout<<"Ingrese la cantidad: ";
   cin>>n;
   }while(n>=15);
   int *notas=new int[n];
   for(int i=0;i<n;i++){
       cin>>notas[i];
       cout<<"nota mayor:"<<calcular_mayor(n,notas)<<endl;
       cout<<"Promedio"<<calcular_mayor(n,notas)<<endl;


   }
    return 0;
}
int calcular_promedio(int n,int notas[]){
    int suma=0;
    for (int i=0;i<n;i++){
        suma=suma+notas[i];
    }
    return suma/n;
}
int calcular_mayor(int n,int notas[]){
    int mayor=0;
    for(int i=0;i<n;i++){
        if (notas[i]>mayor){
            mayor=notas[i];
        }
    }
}
int imprimir_notas(int n ,int notas[],int prom){
    for(int i=0,i<n,i++){
        cout<<notas[i];
    }
}


//
// EJERCICIO  CON RAND Created by Jesus on 26/09/2019.
//

