/*
 * Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y
 * determine el mayor elemento del vector.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cantNum;
    double mayor=-INFINITY;

    cout << "ingrese el numero de elementos a guardar" << endl;
    cin >> cantNum;

    int vector[cantNum];

    for (int i = 0; i < cantNum; i++)
    {
        cout << "ingrese el numero " << i + 1 << " del vector " << endl;
        cin >> vector[i];

        if(vector[i]>mayor){
            mayor=vector[i];
        }
    }

    cout<<"El numero mas grande del array es: "<<mayor<<endl;

    return 0;
}