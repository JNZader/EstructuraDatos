#include <iostream>
#include <conio.h>


using namespace std;

/*
 * Ejercicio 1: Escribe un programa que con While, defina un vector de números y calcule la suma de 
 * sus elementos. Use la librería conio.h, y la función getch().
 */
int main() {
    int cantNum;
    int i=0;
    int suma=0;

    cout<<"ingrese el numero de elementos a ingresar"<<endl;
    cin>>cantNum;
  
    int vector[cantNum];


    while(i<cantNum){
        cout<<"ingrese el numero del vector "<<i+1<<endl;
        cin>>vector[i];
        suma+=vector[i];
        i++;
    }

    cout<<endl;
    cout<<"la suma de los elementos del vector es:"<<suma<<endl;

    cout<<"precione una tecla para salir"<<endl;

    _getch();

    return 0;
}