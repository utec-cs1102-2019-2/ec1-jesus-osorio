#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H
class Vehiculo {
public:
    int VelocidadMaxima;
    int VelocidadMinima;
    int VelocidadActual;
    int posX;
    int posY;
    void avanzar();
    void retroceder();

};


#endif //SESSION12A_VEHICULO_H
