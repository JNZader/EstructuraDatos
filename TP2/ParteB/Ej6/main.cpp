/*
 * Ejercicio 6: Realice un programa que calcule A-suma y B-producto de 2 matrices cuadradas de 3x3.
 */
#include <iostream>

using namespace std;

int main()
{
    int matrizA[3][3], matrizB[3][3], suma[3][3]={0}, producto[3][3]={0};

    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << endl;
    cout << "La suma de las matrices A y B es:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                producto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    cout << endl;
    cout << "El producto de las matrices A y B es:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
