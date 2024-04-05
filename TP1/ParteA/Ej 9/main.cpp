/*
Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras.
Luego determine y muestre cuál de ellas llego primero.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nombreNadadora1, nombreNadadora2;
    float tiempoNadadora1, tiempoNadadora2;

    cout << "Ingrese el nombre de la primera nadadora: ";
    cin >> nombreNadadora1;

    cout << "Ingrese el tiempo de la primera nadadora (en segundos): ";
    cin >> tiempoNadadora1;

    cout << endl;

    cout << "Ingrese el nombre de la segunda nadadora: ";
    cin >> nombreNadadora2;

    cout << "Ingrese el tiempo de la segunda nadadora (en segundos): ";
    cin >> tiempoNadadora2;

    if (tiempoNadadora1 < tiempoNadadora2)
    {
        cout << "La ganadora es " << nombreNadadora1 << " con un tiempo de " << tiempoNadadora1 << " segundos." << endl;
    }
    else if (tiempoNadadora1 > tiempoNadadora2)
    {
        cout << "La ganadora es " << nombreNadadora2 << " con un tiempo de " << tiempoNadadora2 << " segundos." << endl;
    }
    else
    {
        cout << "Hay un empate entre " << nombreNadadora1 << " y " << nombreNadadora2 << " con un tiempo de " << tiempoNadadora1 << " segundos." << endl;
    }

    return 0;
}