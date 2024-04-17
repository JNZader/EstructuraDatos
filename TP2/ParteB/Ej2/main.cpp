/*
 * Ejercicio 2: Realiza un programa que defina una matriz de NxN y escriba un ciclo para que muestre
la diagonal principal de la matriz. El número N es un valor válido entre 3 a 7.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int filas, columnas;
    do
    {
        cout << "Ingrese el numero de filas(entre 3 y 7 inclusive): ";
        cin >> filas;
        cout << "Ingrese el numero de columnas(entre 3 y 7 inclusive): ";
        cin >> columnas;
    } while ((filas <= 3 && filas >= 7) && (columnas <= 3 && columnas >= 7));
    cout << endl;

    int matriz[filas][columnas];

    srand(time(NULL));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 1 + rand() % (99);
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (i == j)
            {
                cout << matriz[i][j] << " ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
