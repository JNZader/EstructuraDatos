#ifndef PILA_PROTOTIPO_H
#define PILA_PROTOTIPO_H

#include <iostream>
using namespace std;

const int N = 6; // Tamaño de la pila (ajustar según necesidad)

struct Pila
{
private:           // Interfaz privada: encapsulamiento
    int tope = -1; // Valor inválido para el tope (inicialmente vacía)
    int datos[N];  // Arreglo para almacenar los elementos de la pila

public: // Interfaz pública
    void push(int elemento)
    {
        if (!pilaLlena())
        {                           // Verifica si hay espacio disponible
            tope++;                 // Sube el tope al siguiente índice libre
            datos[tope] = elemento; // Almacena el elemento en la posición del tope
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
        {                       // Verifica si la pila está vacía
            return datos[tope]; // Devuelve el elemento en el tope
        }
        else
        {
            cout << "La pila esta vacia, no hay tope!" << endl;
            return -1; // Valor de error si la pila está vacía
        }
    }

    void pop()
    {
        if (tope != -1)
        { // Verifica si la pila está vacía
            cout << "Elemento removido: " << datos[tope] << endl;
            tope--; // Baja el tope al índice anterior
        }
        else
        {
            cout << "La pila esta vacia, no hay elementos para remover!" << endl;
        }
    }

    bool pilaVacia()
    {
        return tope == -1; // Si el tope es -1, la pila está vacía
    }

    bool pilaLlena()
    {
        return tope == N - 1; // Si el tope es igual al tamaño máximo, la pila está llena
    }

    int getTope()
    { // Función para obtener el valor del tope
        if (tope != -1)
        {
            return datos[tope];
        }
        else
        {
            cout << "La pila esta vacia, no hay tope!" << endl;
            return -1; // Valor de error si la pila está vacía
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

#endif
