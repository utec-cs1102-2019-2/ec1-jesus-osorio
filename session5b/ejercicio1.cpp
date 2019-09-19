#include <iostream>
using namespace std;
int main() {

    cout<<"ejercicio1"<<endl;
    int var_local=10;
    int *pt_var_local=&var_local;
    *pt_var_local=20;
    cout<<var_local<<"\n";
            
    
    return 0;
}
//
// Created by Jesus on 19/09/2019.
//

