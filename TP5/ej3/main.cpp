/*Suponga que administra un estacionamiento en forma de callejón(pila), cuenta con Cochera1, Cochera2 para 10 autos cada una,
 ambas solamente tienen una puerta de entrada/salida, y que el valor hora es $100-
  Se diseña una estructura auto con los datos: placa, propietario, y hora de entrada. 
A-   Si desea estacionar un auto en Cochera1 o Cochera2, el sistema solicita sus datos, y agrega.
B-   Habrá un procedimiento para mostrar las cocheras por orden de salida de los vehículos.*/


#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

const int N = 10; // tamaño cochera
const int VALOR_HORA = 100; // valor hora

//estructura para los datos del auto
struct Auto {
    string patente;
    string propietario;
    int horaEntrada;
};

// clase para manejar la pila
class Pila {
private:
    int tope;
    Auto autos[N];

public:
    Pila() : tope(-1) {}

    //metodo apilar auto
    void push(Auto nuevoAuto) {
        if (tope < N - 1) {
            tope++;
            autos[tope] = nuevoAuto;
            cout << "Auto con patente " << nuevoAuto.patente << " estacionado en la posicion " << tope + 1 << endl;
        } else {
            cout << "¡La cochera esta LLENA!" << endl;
        }
    }

    //metodo para desapilar auto
    Auto pop() {
        if (tope >= 0) {
            Auto autoRetirado = autos[tope];
            tope--;
            return autoRetirado;
        } else {
            cout << "La cochera esta VACIA" << endl;
            return {}; //devolvemos un auto vacio si la cochera esta vacia
        }
    }

    //metodo para mostrar los autos en orden de salida
    void mostrarAutos() {
        if (tope >= 0) {
            for (int i = tope; i >= 0; i--) {
                cout << "Auto en posicion " << i + 1 << ": Patente: " << autos[i].patente
                     << ", Propietario: " << autos[i].propietario
                     << ", Hora de entrada: " << autos[i].horaEntrada << endl;
            }
        } else {
            cout << "La cochera esta VACIA" << endl;
        }
    }

    //mtodo para verificar si la pila esta vacia
    bool vacia() {
        return tope == -1;
    }
};

// clase para manejar estacionamiento
class Estacionamiento {
private:
    Pila cochera1;
    Pila cochera2;

public:
    void estacionarAuto(int cochera, Auto nuevoAuto) {
        if (cochera == 1) {
            cochera1.push(nuevoAuto);
        } else if (cochera == 2) {
            cochera2.push(nuevoAuto);
        } else {
            cout << "Cochera no valida" << endl;
        }
    }

    void retirarAuto(int cochera) {
        if (cochera == 1) {
            if (!cochera1.vacia()) {
                Auto autoRetirado = cochera1.pop();
                int horaSalida;
                cout << "Ingrese la hora de salida (solo la hora, por ejemplo, 16 para las 4 PM): ";
                cin >> horaSalida;
                int horasEstacionado = horaSalida - autoRetirado.horaEntrada;
                int costo = horasEstacionado * VALOR_HORA;
                cout << "Auto con patente " << autoRetirado.patente << " retirado. Costo: $" << costo << endl;
            }
        } else if (cochera == 2) {
            if (!cochera2.vacia()) {
                Auto autoRetirado = cochera2.pop();
                int horaSalida;
                cout << "Ingrese la hora de salida (solo la hora, por ejemplo, 16 para las 4 PM): ";
                cin >> horaSalida;
                int horasEstacionado = horaSalida - autoRetirado.horaEntrada;
                int costo = horasEstacionado * VALOR_HORA;
                cout << "Auto con patente " << autoRetirado.patente << " retirado. Costo: $" << costo << endl;
            }
        } else {
            cout << "Cochera no valida" << endl;
        }
    }

    void mostrarAutos(int cochera) {
        if (cochera == 1) {
            cout << "Autos en Cochera1:" << endl;
            cochera1.mostrarAutos();
        } else if (cochera == 2) {
            cout << "Autos en Cochera2:" << endl;
            cochera2.mostrarAutos();
        } else {
            cout << "Cochera no valida" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Spanish");

    
    cout << "*********************************************" << endl;
    cout << "*            ESTACIONAMIENTO GRUPO E         *" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    Estacionamiento estacionamiento;
    int opcion;
    
    do {
        cout << "1. Estacionar auto en Cochera1" << endl;
        cout << "2. Estacionar auto en Cochera2" << endl;
        cout << "3. Retirar auto de Cochera1" << endl;
        cout << "4. Retirar auto de Cochera2" << endl;
        cout << "5. Mostrar autos en Cochera1" << endl;
        cout << "6. Mostrar autos en Cochera2" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: {
                Auto nuevoAuto;
                cout << "\nIngrese patente: ";
                cin >> nuevoAuto.patente;
                cout << "Ingrese propietario: ";
                cin >> nuevoAuto.propietario;
                cout << "Ingrese hora de entrada (solo la hora, por ejemplo, 14 para las 2 PM): ";
                cin >> nuevoAuto.horaEntrada;
                estacionamiento.estacionarAuto(1, nuevoAuto);
                cout << endl;
                break;
            }
            case 2: {
                Auto nuevoAuto;
                cout << "\nIngrese patente: ";
                cin >> nuevoAuto.patente;
                cout << "Ingrese propietario: ";
                cin >> nuevoAuto.propietario;
                cout << "Ingrese hora de entrada (solo la hora, por ejemplo, 14 para las 2 PM): ";
                cin >> nuevoAuto.horaEntrada;
                estacionamiento.estacionarAuto(2, nuevoAuto);
                cout << endl; 
                break;
            }
            case 3: {
                estacionamiento.retirarAuto(1);
                cout << endl;
                break;
            }
            case 4: {
                estacionamiento.retirarAuto(2);
                cout << endl; 
                break;
            }
            case 5: {
                estacionamiento.mostrarAutos(1);
                cout << endl; 
                break;
            }
            case 6: {
                estacionamiento.mostrarAutos(2);
                cout << endl; 
                break;
            }
            case 7:
                cout << "\nSaliendo del sistema..." << endl;
                break;
            default:
                cout << "\nOpción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 7);

    return 0;
}



/* FALTA PULIR , SE DEBE LIMPIAR BUFFER DE ALGUNA MANERA PARA QUE ANTE UN DATO INVALIDO NO QUEDE ITERANDO EN BUCLE INFINITO*/
