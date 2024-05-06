/*
 Problema 1:
 * Problema 1:
Crear y cargar un arreglo de 10 elementos con valores aleatorios entre 1 y 100. Ingresar por teclado un entero y mostrar un mensaje si el número esta dentro del vector. Use las librerías stdlib.h y time.h para generar números random entre 1 y 100. Declare un enum texiste {NO, SI}
Para el algoritmo que verifica si un entero esta dentro del vector definir una variable de tipo enum llamada texiste, y la inicializan con el literal NO.
Si dentro del for encentran el valor a buscar, cambiar el valor almacenado en la variable existe por el literal SI.
Al finalizar ol for si la variable existe tiene el valor SI significa que el valor fue encontrado: if (existe==SI)
-------------------
Problema 2:
Confeccionar una función que retorne la suma, resta, multiplicación o división de dos enteros (lea los valores por teclado), le pasamos como parámetro los dos valores y un tipo de dato enumerado que indique que operación efectuar. Use un switch mostrar todas las opciones según el enum (sin break).
Declarar un enum operacion {SUMAR, RESTAR, MULTIPLICAR, DIVIDIR}
La función operar recibe como parámetros los dos enteros y el tipo de dato enumerado: int operar(int v1, int v2, enum
operación op)
Mediante un switch identificar la operación a efectuar desde el enum, y retornar la operación respectiva.
 */
#include <iostream>

using namespace std;

enum operacion {SUMAR, RESTAR, MULTIPLICAR, DIVIDIR};

// Prototipo de la función operar
int operar(int v1, int v2, enum operacion op);

int main(int argc, char** argv) {
    int num1, num2;
    enum operacion op;
    double resultado;
    
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout << "¿Qué operación desea realizar?" << endl;
    cout << "0-SUMAR" << endl;
    cout << "1-RESTAR" << endl;
    cout << "2-MULTIPLICAR" << endl;
    cout << "3-DIVIDIR" << endl;
    cin >> op;
    
    // Llamada a la función operar y mostrar el resultado
    resultado = operar(num1, num2, op);
    cout << "El resultado es: " << resultado << endl;
    
    return 0;
}

// Definición de la función operar
int operar(int v1, int v2, enum operacion op) {
    switch(op) {
        case SUMAR:
            return v1 + v2;
        case RESTAR:
            return v1 - v2;
        case MULTIPLICAR:
            return v1 * v2;
        case DIVIDIR:
            return v1 / v2;
    }
}