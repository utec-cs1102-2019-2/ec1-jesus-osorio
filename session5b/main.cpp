#include <iostream>
using namespace std;
int main() {
    int a=5;
    int *ptr=&a;
    a=8;
    *ptr=10;
    cout<<a;

    return 0;
}
//
// Created by Jesus on 19/09/2019.
//

