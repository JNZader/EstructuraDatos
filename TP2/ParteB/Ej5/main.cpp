/*
 * Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz
traspuesta. La matriz traspuesta es aquella en la que su ‘columna i’ era, la ‘fila i’ de
la matriz en su forma original.
 */
#include <iostream>

using namespace std;

int main()
{

    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese el elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;

    int matrizTranspuesta[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
