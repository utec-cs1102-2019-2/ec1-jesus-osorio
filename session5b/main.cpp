#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    int a = 5;
    int *ptr = &a;
    *ptr = 10;
    cout<<a;
    return 0;
}

//
// Created by Jesus on 19/09/2019.
//

