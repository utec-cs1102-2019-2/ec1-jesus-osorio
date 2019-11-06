#ifndef TAREA_POO_TABLERO_H
#define TAREA_POO_TABLERO_H


class Tablero {
private:
    int filas=10;
    int columnas=10;
    string tablero[10][10];
public:
void imprimirTablero();
void crearTablero();
};


#endif //TAREA_POO_TABLERO_H
