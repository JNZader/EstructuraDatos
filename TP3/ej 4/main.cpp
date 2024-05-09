/*

Daniel

4. Escribe un programa que pida 2 nombres de países por teclado, nos dice cual tiene el nombre más largo(strlen), y permita 
elegir una opción: determinar si contiene “guay” (strstr), reemplazar el más corto en el más largo(strcpy), anexar el más
largo al más corto(strcat). Luego muestra el resultado en pantalla. 
Ejemplo: s1=Uruguay s2=Paraguay, tiene guay. Reemplaza s2=Uruguay por s2, y anexa y muestra s1=UruguayParaguay.  */
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char pais1[MAX_LENGTH], pais2[MAX_LENGTH];

    cout << "Ingrese dos nombres de paises\n";
    cout << "Primer pais: ";
    cin.getline(pais1, MAX_LENGTH);
    cout << "Segundo pais: ";
    cin.getline(pais2, MAX_LENGTH);

   
    int longPais1 = strlen(pais1);
    int longPais2 = strlen(pais2);

    // Definimos cuál es el país más largo
    const char* paisMasLargo = (longPais1 > longPais2) ? pais1 : pais2;

    cout << "El pais con el nombre mas largo es: " << paisMasLargo << endl;

    // Determinar si el país más largo contiene "guay"
    const char* contieneGuay = strstr(paisMasLargo, "guay");
    if (contieneGuay != nullptr) {
        cout << "El pais mas largo contiene 'guay'." << endl;
    }
    else {
        cout << "El pais mas largo no contiene 'guay'." << endl;
    }

    char paisAnterior[MAX_LENGTH];

    // Reemplazar el más corto por el más largo
    if (longPais1 < longPais2) {
        /*strcpy_s(paisAnterior, MAX_LENGTH, pais1); 
        strcpy_s(pais1, MAX_LENGTH, pais2); 
        strcpy_s(pais1, MAX_LENGTH, paisAnterior);*/
        strcpy(paisAnterior, pais1); 
        strcpy(pais1, pais2); 
        strcpy(pais2, paisAnterior);
        
        //Daniel lo hizo con strcpy_s pero al probar el programa no funcionaba
    }
    else {
        /*strcpy_s(paisAnterior, MAX_LENGTH, pais2); 
        strcpy_s(pais2, MAX_LENGTH, pais1); 
        strcpy_s(pais2, MAX_LENGTH, paisAnterior); */
        strcpy(paisAnterior, pais2); 
        strcpy(pais2, pais1); 
        strcpy(pais1, paisAnterior); 
    }

    cout << "Despues de reemplazar, pais1: " << pais1 << ", pais2: " << pais2 << endl;

    // Concatenar ambos nombres de país
    char paisConcatenado[MAX_LENGTH * 2];
/*    strcpy_s(paisConcatenado, MAX_LENGTH * 2, pais1);
    strcat_s(paisConcatenado, MAX_LENGTH * 2, pais2);*/
    strcpy(paisConcatenado, pais1);
    strcat(paisConcatenado, pais2);

    cout << "Despues de concatenar, paisConcatenado: " << paisConcatenado << endl;

    return 0;
}