#include <iostream>

using namespace std;

/*
 * Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números de tamaño
 * 100, pero que cargue por teclado n números, y los muestre en la salida estándar los números del
 * vector con sus índices asociados.
 */
int main()
{
    const int MAXSIZE = 100;
    int vector[MAXSIZE];
    int n;

    do
    {
        cout << "Ingrese la cantidad de numeros a cargar: ";
        cin >> n;
    } while (n < 1 || n > MAXSIZE);

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el numero " << i + 1 <<" del vector " << endl;
        cin >> vector[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Vector["<<i + 1 <<"]= "<<vector[i]<< endl;   
    }

    return 0;
}
