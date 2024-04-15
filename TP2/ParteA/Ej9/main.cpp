/*
 * Ejercicio 9: Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba ¨SI¨,
 * si el vector esta ordenado ascendentemente, o ¨NO¨ si el vector no está ordenado
 */
#include <iostream>
#include <ctime>

using namespace std;
bool estaOrdenado(int array[]);

int main()
{

    srand(time(NULL));

    int array_ascendente[100];
    for (int i = 0; i < 100; ++i)
    {
        array_ascendente[i] = i + 1;
    }

    int array_desordenado[100];
    for (int i = 0; i < 100; ++i)
    {
        array_desordenado[i] = rand() % 100 + 1;
    }

    string mensaje = estaOrdenado(array_ascendente) ? "el array esta ordenado" : "el array no esta ordenado";

    cout << mensaje << endl;

    mensaje = estaOrdenado(array_desordenado) ? "el array esta ordenado" : "el array no esta ordenado";

    cout << mensaje << endl;

    return 0;
}

bool estaOrdenado(int array[])
{
    bool ordenado = true;

    for (int i = 0; i < 100; i++)
    {
        if (array[i] > array[i + 1])
        {
            ordenado = false;
            break;
        }
    }

    return ordenado;
}