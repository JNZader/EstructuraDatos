#ifndef PILA_PROTOTIPO_H
#define PILA_PROTOTIPO_H

#include <iostream>
using namespace std;

const int N = 6; // Tamaño de la pila (ajustar según necesidad)

struct Pila
{
private:
    int tope = -1; // Valor invalido para el tope (inicialmente vacia)
    int datos[N];  // Arreglo para almacenar los elementos de la pila

public:
    void push(int elemento)
    {
        if (!pilaLlena())
        {
            tope++;
            datos[tope] = elemento;
            cout << "Push del elemento " << elemento << " en la posicion " << tope << endl;
        }
        else
        {
            cout << "La pila esta llenisima!" << endl;
        }
    }

    int verTope()
    {
        if (tope != -1)
        {
            return datos[tope];
        }
        else
        {
            cout << "La pila esta vacia, no hay tope!" << endl;
            return -1;
        }
    }

    void pop()
    {
        if (tope != -1)
        {
            cout << "Elemento removido: " << datos[tope] << endl;
            tope--;
        }
        else
        {
            cout << "La pila esta vacia, no hay elementos para remover!" << endl;
        }
    }

    bool pilaVacia()
    {
        return tope == -1;
    }

    bool pilaLlena()
    {
        return tope == N - 1;
    }

    int getTope()
    {
        if (tope != -1)
        {
            return datos[tope];
        }
        else
        {
            cout << "La pila esta vacia, no hay tope!" << endl;
            return -1;
        }
    }

    void mostrar()
    {
        if (tope == -1)
        {
            cout << "La pila esta vacia!" << endl;
        }
        else
        {
            cout << "Elementos en la pila: ";
            for (int i = 0; i <= tope; i++)
            {
                cout << datos[i] << " ";
            }
            cout << endl;
        }
    }

    void copiarDesde(Pila &otra)
    {
        tope = otra.tope;
        for (int i = 0; i <= tope; i++)
        {
            datos[i] = otra.datos[i];
        }
    }
};

// Funcion para invertir con una pila auxiliar
void InvierteConAux(Pila &A, Pila &B, Pila &aux)
{
    while (!A.pilaVacia())
    {
        aux.push(A.verTope());
        A.pop();
    }

    while (!aux.pilaVacia())
    {
        B.push(aux.verTope());
        aux.pop();
    }
}

// Funcion recursiva para invertir sin una pila auxiliar
void InvierteSinAux(Pila &A, Pila &B)
{
    if (!A.pilaVacia())
    {
        int temp = A.verTope();
        A.pop();
        InvierteSinAux(A, B);
        B.push(temp);
    }
}

// Función para reemplazar un valor en la pila
void reemplazarElemento(Pila &A, int elementoBuscado, int nuevoElemento)
{
    Pila auxiliar;

    while (!A.pilaVacia())
    {
        int valor = A.verTope();

        if (valor == elementoBuscado)
        {
            A.pop();
            A.push(nuevoElemento);
        }
        else
        {
            auxiliar.push(valor);
            A.pop();
        }
    }

    while (!auxiliar.pilaVacia())
    {
        A.push(auxiliar.verTope());
        auxiliar.pop();
    }
}

#endif
