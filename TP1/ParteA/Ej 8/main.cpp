/*
Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas:
 la nota de prácticas que cuenta un 30% del total,
 la nota teórica que cuenta un 60% y 
 la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas de un alumno
 y escriba en la salida estándar su nota final.
  Permita ingresar por teclado N, la cantidad de alumnos a calificar. 
 */

#include <iostream>

using namespace std;

int main() {

  int n, i;
  float notaPractica, notaTeorica, notaParticipacion, notaFinal;

  cout << "Ingrese la cantidad de estudiantes a calificar: ";
  cin >> n;

  for (i = 1; i <= n; i++) {

    cout << endl;
    cout << "Estudiante " << i << endl;
    cout << "Ingrese la nota de practicas: ";
    cin >> notaPractica;

    cout << "Ingrese la nota de teoria: ";
    cin >> notaTeorica;

    cout << "Ingrese la nota de participacion: ";
    cin >> notaParticipacion;

    notaFinal = (notaPractica * 0.3) + (notaTeorica * 0.6) + (notaParticipacion * 0.1);

    cout << "Nota final: " << notaFinal << endl;
  }

  return 0;
}