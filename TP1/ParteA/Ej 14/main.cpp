/*
Ejercicio 14: Realice un programa que calcule el valor que toma la siguiente función para unos valores dados
 de x e y: f(x,y) = √𝑥/(𝑦2−1)
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float x, y, resultado;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    if (pow(y, 2) - 1 != 0)
    {
        resultado = sqrt(x) / (pow(y, 2) - 1);

        cout << "El valor de la función f(x, y) es: " << resultado << endl;
    }
    else
    {

        cout << "Error: El valor de y^2 - 1 no puede ser cero." << endl;
    }

    return 0;
}