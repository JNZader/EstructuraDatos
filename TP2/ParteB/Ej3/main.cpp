/*
 * Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el 
contenido de M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int matriz[2][2];
    int matriz2[2][2];

    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz[i][j] = 1 + rand() % (99);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz[i][j] + 1;
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
cout << endl;
/*
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
*/
    return 0;
}

