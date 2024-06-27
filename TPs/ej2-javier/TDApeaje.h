#ifndef TDA_PEAJE_H
#define TDA_PEAJE_H

#include <iostream>
#include <string>
#include "Pila.h"

using namespace std;

class TDApeaje {
private:
    Pila vias[2];

public:
    TDApeaje() {}

    void insertarV0(const string& modelo, const string& patente) {
        if (vias[0].pilaLlena()) {
            cout << "La via comun esta llena." << endl;
            return;
        }
        vias[0].push({modelo, patente});
    }

    void insertarV1(const string& modelo, const string& patente) {
        if (vias[1].pilaLlena()) {
            cout << "La via rapida esta llena." << endl;
            return;
        }
        vias[1].push({modelo, patente});
    }

    void suprimirV0() {
        if (vias[0].pilaVacia()) {
            cout << "La via comun esta vacia." << endl;
            return;
        }
        vias[0].pop();
    }

    void suprimirV1() {
        if (vias[1].pilaVacia()) {
            cout << "La via rapida esta vacia." << endl;
            return;
        }
        vias[1].pop();
    }

    void mostrarVias() {
        cout << "Via comun (V0):" << endl;
        vias[0].mostrar();

        cout << "Via rapida (V1):" << endl;
        vias[1].mostrar();
    }
};

#endif