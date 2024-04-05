/*
Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables.
*/
#include <iostream>

using namespace std;

int main()
{

    int a, b, c, temp;

    a = 10;
    b = 20;
    c = 30;

    cout << "Valor original de a: " << a << endl;
    cout << "Valor original de b: " << b << endl;
    cout << "Valor original de c: " << c << endl;

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << endl;
    cout << "Valor nuevo de a: " << a << endl;
    cout << "Valor nuevo de b: " << b << endl;
    cout << "Valor nuevo de c: " << c << endl;

    return 0;
}