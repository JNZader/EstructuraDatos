/*
 * Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.
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
        cout << "Ingrese el numero de filas: ";
        cin >> filas;
        cout << "Ingrese el numero de columnas: ";
        cin >> columnas;
    } while (filas < 1 || columnas < 1);

    int matriz[filas][columnas];
    string matriz2[filas][columnas];

    srand(time(NULL));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 1 + rand() % (100);
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = to_string(matriz[i][j]) + 'b';
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
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}