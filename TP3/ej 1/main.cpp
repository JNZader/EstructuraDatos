/*
1. Escribe un programa que pida tres nombres animales al usuario, y muestre su letra capital y longitud (strchr y strlen). Ejemplo: el usuario introduce como cadenas león, jirafa, y elefante. El programa mostrará por pantalla.
El número de letras para león es 4, letra ‘L’, para jirafa es 6, letra ‘J’; y para elefante es 8, con letra ‘E’.
Pasar la letra a MAYÚSCULA.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre[3];
    char letraMayuscula;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el nombre del animal: ";
        cin >> nombre[i];
    }

    for (int i = 0; i < 3; i++)
    {
        letraMayuscula = toupper(nombre[i][0]);

        cout << "El nombre " << nombre[i] << " tiene " << strlen(nombre[i]) << " letras, y la primera letra en mayuscula es: " << letraMayuscula << endl;
    }
    return 0;
}
