#include <iostream>
using namespace std;
void pedir_notas(float&a,float &b);
int main() {
    float pc1=0.0;
    float bonus=0.0;
    pedir_notas(pc1,bonus);
    //implementar los punteros
    float *prr_pc1=&pc1;
    *prr_pc1=pc1 + bonus;
    cout<<*prr_pc1;

    return 0;

}
void pedir_notas(float &a,float &b){
    cin>>a;
    cin>>b;
    return;

}