/*
 * Ejercicio 1: Se tiene la siguiente información:
· Nombres de 4 empleados.
· Ingresos en concepto de sueldo, cobrado por cada
empleado, en los últimos 3 meses.
Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un arreglo que contenga el ingreso acumulado en sueldos en los últimos 3 meses para
cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
 */
#include <iostream>
#include <tuple>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    tuple<string, double, double, double, double> empleado[4];
    double sueldosTotales = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre del empleado: ";
        cin >> get<0>(empleado[i]);
        cout << endl;

        cout << "Ingrese el sueldo del 1er mes: ";
        cin >> get<1>(empleado[i]);
        cout << endl;

        cout << "Ingrese el sueldo del 2do mes: ";
        cin >> get<2>(empleado[i]);
        cout << endl;

        cout << "Ingrese el sueldo del 3er mes: ";
        cin >> get<3>(empleado[i]);
        cout << endl;

        double acum = (get<1>(empleado[i]) + get<2>(empleado[i]) + get<3>(empleado[i]));

        get<4>(empleado[i]) = acum;

        sueldosTotales += acum;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Empleado: " << get<0>(empleado[i]) << endl;
        cout << "Sueldo 1er mes: " << get<1>(empleado[i]) << endl;
        cout << "Sueldo 2do mes: " << get<2>(empleado[i]) << endl;
        cout << "Sueldo 3er mes: " << get<3>(empleado[i]) << endl;
        cout << "Sueldo acumulado: " << get<4>(empleado[i]) << endl;
    }
    cout << endl;

    cout << "total de sueldos pagados luego de 3 meses: " << sueldosTotales << endl;
    cout << endl;

    double sueldoAcumMax = -INFINITY;
    int indexEmp;

    for (int i = 0; i < 4; i++)
    {
        if (get<4>(empleado[i]) > sueldoAcumMax)
        {
            sueldoAcumMax = get<4>(empleado[i]);
            indexEmp = i;
        }
    }

    cout << "el empleado con mayor sueldo trimestral acumulado es " << get<0>(empleado[indexEmp]) << " con un sueldo acumulado de " << sueldoAcumMax << endl;
    cout << endl;

    return 0;
}