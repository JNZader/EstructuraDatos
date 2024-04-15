/*
 * Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    int copia[5];

    cout << "cuantos numeros quieres ingresar?" << endl;
    cin >> n;

    int numeros[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite un numero: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        copia[i] = numeros[i];
    }

    cout << "Los 5 primeros numeros son: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i + 1 << "]= " << copia[i] << endl;
    }

    return 0;
}