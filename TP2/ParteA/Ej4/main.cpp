/*
 * Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar
 * el vector en orden inverso—del último al primer elemento.
 */
#include <iostream>

using namespace std;

int main()
{
    int cantNum;

    cout << "ingrese el numero de elementos a guardar" << endl;
    cin >> cantNum;

    int vector[cantNum];

    for (int i = 0; i < cantNum; i++)
    {
        cout << "ingrese el numero " << i + 1 << " del vector " << endl;
        cin >> vector[i];
    }

    for (int i = cantNum-1; i >= 0; i--)
    {
        cout << "Vector[" << i  << "]= " << vector[i] << endl;
    }

    return 0;
}
