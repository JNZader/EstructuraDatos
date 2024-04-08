/*
Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10
y muestre en la salida estándar su tabla de multiplicar.
Use un menú para elegir varias tablas diferentes a elección.
*/

#include <iostream>

using namespace std;

void mostrarTablaMulti(int numero, int multiplicador);

int main()
{
    int opcion;

    cout << "Elija una opcion:" << endl;
    cout << "1. Mostrar la tabla de multiplicar del 1 al 10" << endl;
    cout << "2. Mostrar la tabla de multiplicar de un numero en particular" << endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:
        for (int i = 1; i <= 10; i++)
        {
            mostrarTablaMulti(i, 1);
            cout << "------------\n";
        }
        break;
    case 2:
        cout << "Ingrese el numero para ver su tabla de multiplicar:\n";
        int num;
        cin >> num;
        mostrarTablaMulti(num, 1);
        break;
    default:
        cout << "Opcion no valida\n";
    }
    return 0;
}

void mostrarTablaMulti(int numero, int multiplicador)
{
    if (multiplicador <= 10)
    {
        cout << numero << " * " << multiplicador << " = " << numero * multiplicador << endl;
        mostrarTablaMulti(numero, multiplicador + 1);
    }
}