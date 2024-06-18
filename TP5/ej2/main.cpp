/*
2. Se tienen pilaA, pilaB, pilaC con enteros, y los procedimientos o funciones son:
a. InvierteConAux, Dada una Pila A con números, una Pila B y una Pila C vacías, pasar los
elementos de A a B de manera que queden en el mismo orden que estaban en A.
(Se permite utilizar la pila C como auxiliar)
b. InvierteSinAux, que dada una PilaA, una variable X y una Pila Vacía B. Pasar los elementos
de pilaA a pilaB de manera tal que en pilaB queden en el mismo orden (original) en pilaA.
c. Dada una pila A con números, buscar si existe en A un entero “X”, y reemplazarlo otro “Y”
 */
#include "pilaPrototipo.h"
#include <iostream>
using namespace std;

void separador()
{
    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;
}

int main()
{
    Pila miPila;

    // Inicializar la pila con algunos elementos
    miPila.push(0);
    miPila.push(10);
    miPila.push(20);
    miPila.push(30);
    miPila.push(40);

    separador();

    cout << "Estado inicial de la pila miPila: " << endl;
    miPila.mostrar();

    // a. InvierteConAux
    separador();

    Pila pilaA, pilaB, pilaAux;
    pilaA.copiarDesde(miPila);
    InvierteConAux(pilaA, pilaB, pilaAux);

    separador();

    cout << "Estado de la pila pilaAux despues de InvierteConAux: ";
    pilaAux.mostrar();
    cout << "Estado de la pila pilaA despues de InvierteConAux: ";
    pilaA.mostrar();
    cout << "Estado de la pila pilaB despues de InvierteConAux: ";
    pilaB.mostrar();

    // b. InvierteSinAuxRecursivo
    separador();

    Pila copiaPila;
    copiaPila.copiarDesde(miPila);
    Pila pilaC;

    InvierteSinAuxRecursivo(copiaPila, pilaC);

    separador();

    cout << "Estado de la pila copiaPila despues de InvierteSinAuxRecursivo: ";
    copiaPila.mostrar();
    cout << "Estado de la pila pilaC despues de InvierteSinAuxRecursivo: ";
    pilaC.mostrar();

    // c. Reemplazar elemento en pila
    int x = 20;
    int y = 99;

    separador();

    Pila pilaD;
    pilaD.copiarDesde(miPila);

    cout << "Estado de la pila pilaD antes de Reemplazar " << x << " con " << y << ": ";
    pilaD.mostrar();

    separador();

    reemplazarElemento(pilaD, x, y);

    separador();

    cout << "Estado de la pila pilaD despues de Reemplazar " << x << " con " << y << ": ";
    pilaD.mostrar();

    separador();

    return 0;
}