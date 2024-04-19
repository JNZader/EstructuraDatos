/*
 * Ejercicio 8: Se desea saber la temperatura media trimestral de 4 países. Para ello se tiene como
dato las temperaturas medias mensuales de dichos países.
- Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
A. Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
B. Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
C. Calcular la temperatura media trimestral de cada país.
D. Imprimir los nombres de los países y las temperaturas medias trimestrales.
E. Imprimir el nombre de la provincia con la mayor temperatura media trimestral
 */
#include <iostream>
#include <tuple>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    tuple<string, double, double, double, double> tmp[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre del pais: ";
        cin >> get<0>(tmp[i]);
        cout << endl;

        cout << "ingrese la temperatura media del 1er mes " << endl;
        cin >> get<1>(tmp[i]);

        cout << "ingrese la temperatura media del 2do mes " << endl;
        cin >> get<2>(tmp[i]);

        cout << "ingrese la temperatura media del 3er mes " << endl;
        cin >> get<3>(tmp[i]);        

        double promedio = (get<1>(tmp[i]) + get<2>(tmp[i]) + get<3>(tmp[i])) / 3;

        get<4>(tmp[i]) = promedio;
    }
    char opcion;

    do
    {
        cout << "Menu" << endl;
        cout << "A)-Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas." << endl;
        cout << "B)-Imprimir los nombres de los países y las temperaturas medias trimestrales." << endl;
        cout << "C)-Imprimir el nombre del pais con la mayor temperatura media trimestral" << endl;

        cout << endl;

        cout << "Ingrese una opcion (a, b, c): "<<endl;

        opcion = getch();

        switch (opcion)
        {
        case 'A':
        case 'a':
            for (int i = 0; i < 4; i++)
            {
                cout << "Pais: " << get<0>(tmp[i]) << endl;
                cout << "Temperatura media 1er mes: " << get<1>(tmp[i]) << endl;
                cout << "Temperatura media 2do mes: " << get<2>(tmp[i]) << endl;
                cout << "Temperatura media 3er mes: " << get<3>(tmp[i]) << endl;
            }
            break;
        case 'B':
        case 'b':
            for (int i = 0; i < 4; i++)
            {
                cout << "Pais: " << get<0>(tmp[i]) << endl;
                cout << "Temperatura media trimestral: " << get<4>(tmp[i]) << endl;
            }
            break;
        case 'C':
        case 'c':
            double tempMax = -INFINITY;
            int indexPais;

            for (int i = 0; i < 4; i++)
            {
                if (get<4>(tmp[i]) > tempMax)
                {
                    tempMax = get<4>(tmp[i]);
                    indexPais = i;
                }
            }

            cout << "el pais con mayor temperatura trimestral es " << get<0>(tmp[indexPais]) << " con una temperatura de " << tempMax << endl;
            break;
        }
    } while (opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'A' && opcion != 'B' && opcion != 'C');

    return 0;
}