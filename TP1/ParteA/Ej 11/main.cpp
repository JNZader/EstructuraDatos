/*
Ejercicio 11: Escribe un programa que lea de la entrada estándar dos números
y muestre en la salida estándar su suma, resta, multiplicación y división.
 */

#include <iostream>

using namespace std;

int main()
{

    float num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;

    return 0;
}
