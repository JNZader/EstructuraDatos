/*
4. En el programa trabajamos ahora con objetos de la clase Queue, 
a. Dada una fila A, Invertirla. Mostrar ambas filas. (usar fila auxiliar si lo necesita) 
b. Utilizando las operaciones de pila y de Fila, COPIE el contenido de una pila P, a una 
Fila C, de tal manera que el primer elemento de la Fila será el elemento “F” que se 
encuentra en el fondo de la pila, el segundo de la Fila el que está apilado sobre “F”,
y así siguiendo. De esta forma el elemento del tope de la pila quedará en el último 
lugar de la Fila. (Para resolver este ejercicio, use pila auxiliar) 
c. Ahora queremos buscar si el número entero X determinar está en la Fila A. La Fila A 
deberá quedar en su estado original al finalizar el algoritmo. 
d. Además de la Fila A cree la fila B, vacíe la fila A y cargue A y B con elementos 
ordenados, realice un algoritmo que inserte los elementos de la fila A y B en otra 
fila C de manera tal que queden ordenados. 
e. Dada una fila C que contiene elementos repetidos consecutivos. Formar otra con 
los elementos de la fila dada eliminando los repetidos.
 */



/************************EJERCICIOO A*************************************************/
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void invertirCola(queue<int>& cola) {
    stack<int> pila;
    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }
    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }
}

void mostrarCola(const queue<int>& cola) {
    queue<int> temp = cola;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    queue<int> Cola;
    Cola.push(1);
    Cola.push(2);
    Cola.push(3);
    Cola.push(4);
    Cola.push(5);

    cout << "Cola original: ";
    mostrarCola(Cola);

    invertirCola(Cola);

    cout << "Cola invertida: ";
    mostrarCola(Cola);

    return 0;
}