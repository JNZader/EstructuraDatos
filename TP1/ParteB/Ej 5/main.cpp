/*
Ejercicio 5: Escriba un programa que lea valores enteros hasta que
se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.
 */

#include <iostream>

using namespace std;

int main()
{
    int numero, suma = 0;

    do
    {
        cout << "ingrese un numero entero:" << endl;
        cin >> numero;

        if (20 > numero || numero > 30)
        {
            suma += numero;
        }

    } while (20 > numero || numero > 30);

    cout << "la suma de todos los numeros es " << suma << endl;

    return 0;
}
