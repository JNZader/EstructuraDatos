/* 4. Escribe un programa que pida 2 nombres de países por teclado, nos dice cual tiene el nombre más largo(strlen), y permita 
elegir una opción: determinar si contiene “guay” (strstr), reemplazar el más corto en el más largo(strcpy), anexar el más
largo al más corto(strcat). Luego muestra el resultado en pantalla. 
Ejemplo: s1=Uruguay s2=Paraguay, tiene guay. Reemplaza s2=Uruguay por s2, y anexa y muestra s1=UruguayParaguay.  */
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int maisn() {
    const int MAX_LENGTH = 100;
    char pais1[MAX_LENGTH], pais2[MAX_LENGTH];

    cout << "Ingrese dos nombres de países\n";
    cout << "Primer país: ";
    cin.getline(pais1, MAX_LENGTH);
    cout << "Segundo país: ";
    cin.getline(pais2, MAX_LENGTH);

   
    int longPais1 = strlen(pais1);
    int longPais2 = strlen(pais2);

    // Definimos cuál es el país más largo
    const char* paisMasLargo = (longPais1 > longPais2) ? pais1 : pais2;

    cout << "El país con el nombre más largo es: " << paisMasLargo << endl;

    // Determinar si el país más largo contiene "guay"
    const char* contieneGuay = strstr(paisMasLargo, "guay");
    if (contieneGuay != nullptr) {
        cout << "El país más largo contiene 'guay'." << endl;
    }
    else {
        cout << "El país más largo no contiene 'guay'." << endl;
    }

    char paisAnterior[MAX_LENGTH];

    // Reemplazar el más corto por el más largo
    if (longPais1 < longPais2) {
        strcpy_s(paisAnterior, MAX_LENGTH, pais1); 
        strcpy_s(pais1, MAX_LENGTH, pais2); 
        strcpy_s(pais1, MAX_LENGTH, paisAnterior);

    }
    else {
        strcpy_s(paisAnterior, MAX_LENGTH, pais2); 
        strcpy_s(pais2, MAX_LENGTH, pais1); 
        strcpy_s(pais2, MAX_LENGTH, paisAnterior); 

    }

    cout << "Después de reemplazar, pais1: " << pais1 << ", pais2: " << pais2 << endl;

    // Concatenar ambos nombres de país
    char paisConcatenado[MAX_LENGTH * 2];
    strcpy_s(paisConcatenado, MAX_LENGTH * 2, pais1);
    strcat_s(paisConcatenado, MAX_LENGTH * 2, pais2);

    cout << "Después de concatenar, paisConcatenado: " << paisConcatenado << endl;

    return 0;
}