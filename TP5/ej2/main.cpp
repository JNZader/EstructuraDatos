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

// Funcion para invertir con una pila auxiliar
void InvierteConAux(Pila &A, Pila &B, Pila &aux)
{
    // Paso 1: Mover todos los elementos de A a aux
    while (!A.pilaVacia())
    {
        aux.push(A.verTope()); // Se lee el elemento del tope de A y se empuja a aux
        A.pop();               // Se remueve el elemento del tope de A
    }

    // Paso 2: Mover todos los elementos de aux a B
    while (!aux.pilaVacia())
    {
        B.push(aux.verTope()); // Se lee el elemento del tope de aux y se empuja a B
        aux.pop();             // Se remueve el elemento del tope de aux
    }
}

// Función recursiva para invertir sin una pila auxiliar
void InvierteSinAuxRecursivo(Pila &A, Pila &B)
{
    if (!A.pilaVacia())
    {
        int temp = A.verTope();
        A.pop();

        // Llamada recursiva para mover los elementos restantes de A a B
        InvierteSinAuxRecursivo(A, B);

        // Empujar el elemento temporal al final de B
        B.push(temp);
    }
}

// Función principal InvierteSinAux que llama a la función recursiva
void InvierteSinAux(Pila &A, Pila &B)
{
    InvierteSinAuxRecursivo(A, B);
}


// Función para reemplazar un valor en la pila
void reemplazarElemento(Pila &A, int elementoBuscado, int nuevoElemento)
{
    Pila auxiliar; // Pila auxiliar para almacenar temporalmente los elementos

    while (!A.pilaVacia())
    {
        int valor = A.verTope(); // Consulta el valor del elemento en el tope de la pila A

        if (valor == elementoBuscado)
        {
            // Si el valor coincide con el elemento buscado, lo reemplazamos
            A.pop();            // Quitamos el elemento que queremos reemplazar
            A.push(nuevoElemento); // Insertamos el nuevo elemento en su lugar
        }
        else
        {
            // Si no coincide, movemos el elemento a la pila auxiliar temporalmente
            auxiliar.push(valor);
            A.pop(); // Quitamos el elemento de la pila original A
        }
    }

    // Ahora reconstruimos la pila original A desde la pila auxiliar
    while (!auxiliar.pilaVacia())
    {
        A.push(auxiliar.verTope()); // Devolvemos los elementos a A en el mismo orden
        auxiliar.pop(); // Quitamos los elementos de la pila auxiliar
    }
}



int main()
{
    Pila miPila; // Creacion de una instancia de la pila

    // Inicializar la pila con algunos elementos
    miPila.push(0);
    miPila.push(10);
    miPila.push(20);
    miPila.push(30);
    miPila.push(40);

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    cout << "Estado inicial de la pila miPila: " << endl;
    miPila.mostrar();

    // a. InvierteConAux
    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    Pila pilaA, pilaB, pilaAux;
    pilaA.copiarDesde(miPila);
    InvierteConAux(pilaA, pilaB, pilaAux);

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    cout << "Estado de la pila pilaAux despues de InvierteConAux: ";
    pilaAux.mostrar();
    cout << "Estado de la pila pilaA despues de InvierteConAux: ";
    pilaA.mostrar();
    cout << "Estado de la pila pilaB despues de InvierteConAux: ";
    pilaB.mostrar();

    // b. InvierteSinAux
    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    Pila copiaPila;
    copiaPila.copiarDesde(miPila);
    Pila pilaC;

    InvierteSinAux(copiaPila, pilaC);

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    cout << "Estado de la pila copiaPila despues de InvierteSinAux: ";
    copiaPila.mostrar();
    cout << "Estado de la pila pilaAuxC despues de InvierteSinAux: ";
    pilaC.mostrar();

    // c. Reemplazar elemento en pila
    int x = 20; // Valor a buscar
    int y = 99; // Valor a reemplazar

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    Pila pilaD;
    pilaD.copiarDesde(miPila);

    cout << "Estado de la pila pilaD antes de Reemplazar " << x << " con " << y << ": ";
    pilaD.mostrar();

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    reemplazarElemento(pilaD, x, y);

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;

    cout << "Estado de la pila pilaD despues de Reemplazar " << x << " con " << y << ": ";
    pilaD.mostrar();

    cout << endl;
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << endl;
    return 0;
}
