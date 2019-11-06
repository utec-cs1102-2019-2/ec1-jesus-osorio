#include <iostream>
#include "Persona.h"
#include "Alumno.h"
using namespace std;
int main() {
    Persona *juanito = new Persona("Juanito", 18, 72529570, "Peruano");
    juanito->mostrarPersona();

    Alumno *alvaro = new Alumno("Alvaro", 19,72529570, "Peruano", "4545452" );
    alvaro->mostrarAlmumno();
    return 0;
}