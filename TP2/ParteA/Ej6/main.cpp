/*
 * Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número
 * en el vector cuyo valor equivale a la suma del resto de números del vector
 */
#include <iostream>

using namespace std;

int main()
{
    int cantNum;
    bool existe = false;
    int suma = 0;
    int nroSuma;

    cout << "ingrese el numero de elementos a guardar" << endl;
    cin >> cantNum;

    int vector[cantNum];

    for (int i = 0; i < cantNum; i++)
    {
        cout << "ingrese el numero " << i + 1 << " del vector " << endl;
        cin >> vector[i];

        suma += vector[i];
    }

    for (int i = 0; i < cantNum; i++)
    {
        if (vector[i] == (suma - vector[i]))
        {
            existe = true;
            nroSuma = vector[i];
            break;
        }
    }

    string mensaje= existe ? "existe un numero que equivale a la suma de los otros: "+to_string(nroSuma) : "no existe un numero que equivale a la suma de los otros";

    cout << mensaje << endl;

    return 0;
}