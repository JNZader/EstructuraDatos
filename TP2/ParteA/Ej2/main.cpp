#include <iostream>
#include <conio.h>

using namespace std;

/*
 * Ejercicio 2: Escribe un programa usando un for, que defina un vector de números y calcule la
 * multiplicación acumulada de sus elementos. Use la librería conio.h, y la función getch().
 */
int main()
{
    int cantNum;
    int suma = 1;

    cout << "ingrese el numero de elementos a ingresar" << endl;
    cin >> cantNum;

    int vector[cantNum];

    for (int i = 0; i < cantNum; i++)
    {
        cout << "ingrese el numero " << i + 1<< " del vector " << endl;
        cin >> vector[i];
        suma *= vector[i];
    }

    cout << endl;
    cout << "el producto de los elementos del vector es:" << suma << endl;

    cout << "precione una tecla para salir" << endl;

    _getch();

    return 0;
}