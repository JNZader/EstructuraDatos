#include <iostream>
#include "TDApeaje.h"

using namespace std;

int main()
{
    TDApeaje peaje;

    // Cargar 4 vehiculos en la via comun (fila 0)
    cout << endl;
    peaje.insertarV0("Vento", "AZ 234 RT");
    peaje.insertarV0("Cronos", "AS 459 GT");
    peaje.insertarV0("Civic", "BB 123 ZZ");
    peaje.insertarV0("Corolla", "CC 456 YY");
    cout << endl;

    // Cargar 1 vehiculo en la via rapida (fila 1)
    peaje.insertarV1("Tesla", "DD 789 XX");
    cout << endl;
    // Desencolar un vehiculo de cada via
    peaje.suprimirV0();
    peaje.suprimirV1();
    cout << endl;
    // Mostrar el estado de las vias
    peaje.mostrarVias();
    cout << endl;
    return 0;
}
