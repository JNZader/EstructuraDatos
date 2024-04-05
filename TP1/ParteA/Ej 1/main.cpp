#include <iostream>

using namespace std;

/*
 * Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del usuario, además
debe mostrar el nombre_completo por pantalla. (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas
 */
int main()
{

    string nombre, apellido, nombreCompleto;
    
    //Entrada de nombre y apellido
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    
    cout << "Ingresa tu apellido: ";
    cin >> apellido;
    
    //Concatena nombre y apellido
    nombreCompleto = nombre + " " + apellido;
  
    //Mostrar nombre completo
    cout << "Tu nombre completo es: " << nombreCompleto << endl;

    return 0;
}