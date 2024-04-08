/*
Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores 
leídos mayores que cero.

Usar una estructura do-while.

 */

#include <iostream>

using namespace std;

int main() {
    int numero, contador=0;
    do
    {
        cout<<"Ingrese un numero(0 para finalizar): ";
        cin>>numero;

        if(numero>0){
            contador++;
        }        
    } while (numero!=0);
    
    cout<<"se ingresaron "<<contador<<" numeros mayores a cero";


    return 0;
}