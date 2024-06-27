#ifndef PILA_H
#define PILA_H

#include <iostream>
#include <string>
using namespace std;

const int N = 5; // Tamaño de la pila (ajustar según necesidad)

struct Auto {
    string modelo;
    string patente;
};

class Pila {
private:
    int tope = -1; // Valor inválido para el tope (inicialmente vacía)
    Auto datos[N]; // Arreglo para almacenar los elementos de la pila

public:
    void push(Auto elemento) {
        if (!pilaLlena()) {
            tope++;
            datos[tope] = elemento;
            cout << "Push del elemento " << elemento.modelo << ", " << elemento.patente << " en la posicion " << tope << endl;
        } else {
            cout << "La pila esta llenisima!" << endl;
        }
    }

    Auto verTope() {
        if (tope != -1) {
            return datos[tope];
        } else {
            cout << "La pila esta vacia, no hay tope!" << endl;
            return {"", ""}; 
        }
    }

    void pop() {
        if (tope != -1) {
            cout << "Elemento removido: " << datos[tope].modelo << ", " << datos[tope].patente << endl;
            tope--;
        } else {
            cout << "La pila esta vacia, no hay elementos para remover!" << endl;
        }
    }

    bool pilaVacia() {
        return tope == -1;
    }

    bool pilaLlena() {
        return tope == N - 1;
    }

    void mostrar() {
        if (tope == -1) {
            cout << "La pila esta vacia!" << endl;
        } else {
            cout << "Elementos en la pila: ";
            for (int i = 0; i <= tope; i++) {
                cout << "(" << datos[i].modelo << ", " << datos[i].patente << ") ";
            }
            cout << endl;
        }
    }
};

#endif
