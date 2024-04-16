/*
 * Ejercicio 10: Hacer un array bidimensional que acepte nueve números, luego, pedir al usuario que
ingrese las coordenadas (x,y) para mostrar el elemento guardado en dicha posición
 */
#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    cout << "Ingrese los 9 elementos del array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int x, y;
    cout << endl;
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;

    if (x >= 0 && x < 3 && y >= 0 && y < 3)
    {
        cout << "El elemento en la coordenada (" << x << ", " << y << ") es: " << matriz[x][y] << endl;
    }
    else
    {
        cout << "Coordenadas invalidas...intente nuevamente" << endl;
    }

    return 0;
}