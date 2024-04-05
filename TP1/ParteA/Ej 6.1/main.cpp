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

    int segundos, horas, minutos, restante;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    horas = segundos / 3600;

    restante = segundos % 3600;

    minutos = restante / 60;

    restante = restante % 60;

    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << restante << endl;

    return 0;
}
