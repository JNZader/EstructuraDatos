/*
Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar,
 la suma de los cuadrados de los 10 primeros enteros mayores que cero.
 Mostrar un mensaje de invalidez, si ingresa un negativo.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int numero;
    int sumaCuadrados = 0;

    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero >= 0)
    {
        for (int i = numero; i <= (numero + 10); i++)
        {
            sumaCuadrados += pow(i, 2);
        }
        cout << "la suma de los cuadrados del numero ingresado y los 10 siguientes es: " << sumaCuadrados << endl;
    }
    else
    {
        cout << "el numero debe ser positivo";
    }

    return 0;
}

/*no es lo que pedia pero no termine de entender la consigna asi que la modifique*/