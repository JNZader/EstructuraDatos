/*
Ejercicio 7: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba 
en la salida estándar: A) perímetro y superficie y B) su hipotenusa.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  float catetoA, catetoB, perimetro, superficie, hipotenusa;

  cout << "Ingrese el valor del cateto A: ";
  cin >> catetoA;

  cout << "Ingrese el valor del cateto B: ";
  cin >> catetoB;

  superficie = (catetoA * catetoB) / 2;

  hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

  perimetro = catetoA + catetoB + hipotenusa;

  cout << "Perimetro: " << perimetro << endl;
  cout << "Superficie: " << superficie << endl;
  cout << "Hipotenusa: " << hipotenusa << endl;

  return 0;
}

