#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    int ival=42;
    int *p=&ival;
    cout<<p<<" "<<*p<<" "<<&p<<endl;
    return 0;
}