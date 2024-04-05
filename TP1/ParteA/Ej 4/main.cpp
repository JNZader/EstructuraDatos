/*
Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida
será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 2 cifras.
 */

#include <iostream>

using namespace std;

int main()
{

    float pesos, dolares;

    cout << "Ingrese la cantidad en pesos: ";
    cin >> pesos;

    dolares = pesos / 850;

    // muestra solo 2 decimales
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "El monto en dólares es: " << dolares << endl;

    return 0;
}
