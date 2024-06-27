#include <iostream>
#include <cstring>
#include "funciones.h"

using namespace std;

int main() {
    char palabra1[100] = "palabra";
    char input[100];

    cout << "Ingrese otra parte de la palabra1: ";
    cin.getline(input, 100);
    strcat(palabra1, " ");
    strcat(palabra1, input);

    cout << "palabra1: " << palabra1 << endl;

    int opcion;
    do {
        cout << "Opciones:" << endl;
        cout << "1. Determinar la longitud de la cadena" << endl;
        cout << "2. Solicitar otra cadena" << endl;
        cout << "3. Solicitar otra letra" << endl;
        cout << "4. Comparar con 'Examen de EDA'" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";

        char opcionStr[10];
        cin.getline(opcionStr, 10);
        opcion = atoi(opcionStr); 

        switch (opcion) {
            case 1:
                determinarLongitud(palabra1);
                break;
            case 2:
                solicitarOtraCadena(palabra1);
                break;
            case 3:
                solicitarOtraLetra(palabra1);
                break;
            case 4:
                compararConExamenDeEDA();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida... Intente nuevamente..." << endl;
        }
    } while (opcion != 5);

    return 0;
}
