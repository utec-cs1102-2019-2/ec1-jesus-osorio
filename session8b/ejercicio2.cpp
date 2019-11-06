
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
void imprimir(vector<vector<int>> matrix);
void sumar_filas(vector<vector<int>> matrix);
void sumar_columnas(vector<vector<int>> matrix);
int m;
int main() {
    int c=0; int f=0;
    cout<<"Filas: ";
    cin>>f;
    cout<<"Columnas: ";
    cin>>c;
    vector<vector<int>> matrix;
    for(int i=0;i<f;i++){
        vector <int> vector;
        for(int j=0;j<c;j++){
            int num=20+rand()%20;
            vector.push_back(num);
        }
        matrix.push_back(vector);
    }
    imprimir(matrix);
    sumar_filas(vector<vector<int>> matrix);
    sumar_columnas(vector<vector<int>> matrix);
    return 0;
}
void imprimir(vector<vector<int>> matrix){
    for (int a=0; a<matrix.size(); a++){
        for (int b=0; b<matrix[a].size(); b++){
            cout<<matrix[a][b]<<" \t";
        }
        cout<<endl;
    }
}
void sumar_filas(vector<vector<int>> matrix,m){
    cout<<"m: ";
    cin>>m;
    vector<int m>


}
void sumar_columnas(vector<vector<int>> matrix,m){

}


//
// Created by Jesus on 10/10/2019.
//

