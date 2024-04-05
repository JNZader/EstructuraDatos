/*
Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas,
minutos y segundos.
6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como
resultado lo transforma y muestra el total a cantidad de segundos
 */

#include <iostream>

using namespace std;

int main()
{

    int horas, minutos, segundos, totalSegundos;

    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    cout << "El total de segundos es: " << totalSegundos << endl;

    return 0;
}
