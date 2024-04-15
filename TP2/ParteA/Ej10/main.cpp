/*
 * Ejercicio 10: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los
 * números negativos y en un vector B el doble de los positivos.
 */
#include <iostream>

using namespace std;

int main()
{

    int V[20], contPos = 0, contNeg = 0, contA = 0, contB = 0;

    cout << "ingresa 20 numeros enteros(positivos o negativos)" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "ingrese el elemento " << i + 1 << " del array" << endl;
        cin >> V[i];
        if (V[i] >= 0)
        {
            contPos++;
        }
        else
        {
            contNeg++;
        }
    }
    int A[contNeg], B[contPos];
    for (int i = 0; i < 20; i++)
    {
        if (V[i] >= 0)
        {
            B[contB] = V[i] * 2;
            contB++;
        }
        else
        {
            A[contA] = V[i];
            contA++;
        }
    }
    cout << endl;
    cout << "los numeros negativos del array son: " << endl;
    for (int i = 0; i < contA; i++)
    {
        cout << "el elemento " << i + 1 << " del array A es: " << A[i] << endl;
    }
    cout << endl;
    cout << "el doble de los numeros positivos del array son: " << endl;
    for (int i = 0; i < contB; i++)
    {
        cout << "el elemento " << i + 1 << " del array B es: " << B[i] << endl;
    }

    return 0;
}
