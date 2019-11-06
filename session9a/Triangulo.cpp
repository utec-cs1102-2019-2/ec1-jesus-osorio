#include <iostream>
using namespace std;
class triangulo{
private:
    int lado_1;
    int lado_2;
    int lado_3;
public:
    triangulo(int,int,int);
    void area();
    void perimetro();
    void semiperimetro();
};
triangulo::triangulo(int lado_1,int lado_2, int lado_3) {
    cin>>lado_1;
    cin>>lado_2;
    cin>>lado_3;
}
void triangulo::perimetro() {
    int P=lado_1+lado_2+lado_3;
    cout<<P;
    }

    void triangulo::area(){
    double s= (lado_1 + lado_2 + lado_3)/2;
int solve=sqrt(double );
}
void triangulo::semiperimetro() {
    int pdv2 = (lado_1 + lado_2 + lado_3) / 2;
    cout << pdv2;
}

int main() {

}