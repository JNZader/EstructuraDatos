/*
Ejercicio 13: Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, d, e, f;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    cout << "Ingrese el valor de e: ";
    cin >> e;

    cout << "Ingrese el valor de f: ";
    cin >> f;

    cout << fixed << setprecision(3);

    cout << "A) f(a, b) = " << ((a / b) + 1) << endl;
    cout << "B) f(a, b) = " << ((a + b) / (c + d)) << endl;
    cout << "C) f(a, b) = " << ((a + (b / c)) / (d + (e / f))) << endl;
    cout << "D) f(a, b) = " << (a + (b / (c - d))) << endl;

    return 0;
}