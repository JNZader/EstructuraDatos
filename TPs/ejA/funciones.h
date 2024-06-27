#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void determinarLongitud(char* palabra1) {
    cout << "Longitud de palabra1: " << strlen(palabra1) << endl;
}

void solicitarOtraCadena(char* palabra1) {
    char otraCadena[100];
    cout << "Ingrese otra cadena: ";
    cin.getline(otraCadena, 100);

    if (strstr(palabra1, otraCadena)) {
        cout << "La cadena '" << otraCadena << "' es una subcadena de '" << palabra1 << "'" << endl;
    } else {
        cout << "La cadena '" << otraCadena << "' no es una subcadena de '" << palabra1 << "'" << endl;
    }

    char palabra1Original[100];
    strcpy(palabra1Original, palabra1);

    strcat(palabra1, " - ");
    strcat(palabra1, otraCadena);

    cout << "Cadena resultante: " << palabra1 << endl;
    cout << "Longitud de la cadena original: " << strlen(palabra1Original) << endl;
    cout << "Longitud de la cadena resultante: " << strlen(palabra1) << endl;

    if (strlen(palabra1Original) > strlen(palabra1)) {
        cout << "La cadena original es mas larga." << endl;
    } else if (strlen(palabra1Original) < strlen(palabra1)) {
        cout << "La cadena resultante es mas larga." << endl;
    } else {
        cout << "Ambas cadenas tienen la misma longitud." << endl;
    }
}

void solicitarOtraLetra(char* palabra1) {
    char entrada[100];
    cout << "Ingrese una letra: ";
    cin.getline(entrada, 100);
    char letra = entrada[0];

    if (strchr(palabra1, letra)) {
        cout << "La letra '" << letra << "' se encuentra en '" << palabra1 << "'" << endl;
    } else {
        cout << "La letra '" << letra << "' no se encuentra en '" << palabra1 << "'" << endl;
    }
}

void compararConExamenDeEDA() {
    char cadenaExamen[] = "Examen de EDA";
    char cadenaIngresada[100];

    cout << "Ingrese una cadena para comparar con 'Examen de EDA': ";
    cin.getline(cadenaIngresada, 100);

    char cadenaExamenLower[100];
    char cadenaIngresadaLower[100];

    strcpy(cadenaExamenLower, cadenaExamen);
    strcpy(cadenaIngresadaLower, cadenaIngresada);

    toLowerCase(cadenaExamenLower);
    toLowerCase(cadenaIngresadaLower);

    if (strcasecmp(cadenaExamenLower, cadenaIngresadaLower) == 0) {
        cout << "Las cadenas son iguales (independientemente de las mayusculas)." << endl;
    } else {
        cout << "Las cadenas no son iguales." << endl;
    }
}

#endif // FUNCIONES_H