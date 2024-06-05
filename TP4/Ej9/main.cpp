#include <iostream>
#include <string>
#include <limits>

using namespace std;

int contarPalabras(const string& frase) {
    int contador = 0;
    size_t pos = 0;
    while (true) {
        pos = frase.find(" ", pos);
        if (pos == string::npos)
            break;
        contador++;
        pos++;
    }
    if (!frase.empty())
        contador++;
    return contador;
}

int contarOcurrencias(const string& frase, const string& palabra) {
    int contador = 0;
    size_t pos = 0;
    while ((pos = frase.find(palabra, pos)) != string::npos) {
        contador++;
        pos += palabra.length();
    }
    return contador;
}

int main() {
    int opcion;
    string frase, palabra, input;

    do {
        cout << "Menu:" << endl;
        cout << "1. Contar palabras en una frase" << endl;
        cout << "2. Contar ocurrencias de una palabra en una frase" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";

        getline(cin, input);
        opcion = stoi(input);

        switch (opcion) {
            case 1:
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                cout << "La frase tiene " << contarPalabras(frase) << " palabras." << endl;
                break;
            case 2:
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                cout << "Ingrese una palabra: ";
                cin >> palabra;
                cout << "La palabra \"" << palabra << "\" se encuentra " << contarOcurrencias(frase, palabra) << " veces en la frase." << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
        cout << endl;
    } while (opcion != 3);

    return 0;
}