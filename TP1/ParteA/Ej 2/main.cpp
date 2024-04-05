#include <iostream>

using namespace std;

/*
 * Ejercicio 2: Escribe un programa que lea de la entrada
  estándar el precio de un producto y muestre en la salida
estándar, el precio del producto al aplicarle el IVA
 */
int main(int argc, char **argv)
{
    float precio, iva, precioFinal;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

     iva = precio * 0.21;

    precioFinal = precio + iva;

    cout << "El precio final con IVA es: " << precioFinal << endl;

    return 0;
}