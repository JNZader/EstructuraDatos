/*
Ejercicio 10: Escriba un programa que lea de la entrada estándar el nombre de una persona en un arreglo de 
caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

  string nombre;
  int anioNacimiento, anioActual;

  cout << "Ingrese su nombre: ";
  cin >> nombre;

  cout << "Ingrese el año actual: ";
  cin >> anioActual;

  cout << "Ingrese su año de nacimiento: ";
  cin >> anioNacimiento;

  cout << "Hola " << nombre << ", tu edad actual es de " << (anioActual - anioNacimiento) << " años." << endl;

  return 0;
}