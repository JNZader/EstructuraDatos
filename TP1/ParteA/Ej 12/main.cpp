/*
Ejercicio 12: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2
+ bx + c = 0, teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐)
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float a, b, c, x1, x2;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;

    cout << "Ingrese el coeficiente b: ";
    cin >> b;

    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    float discriminante = b * b - 4 * a * c;

    if (discriminante > 0){
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son: " << x1 << " y " << x2 << endl;
    }else if (discriminante == 0){
        x1 = -b / (2 * a);
        cout << "La única solución es: " << x1 << endl;
    }else{
        cout << "No hay soluciones reales." << endl;
    }

    return 0;
}