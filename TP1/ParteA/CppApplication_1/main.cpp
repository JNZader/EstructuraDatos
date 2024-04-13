#include <iostream>

using namespace std;

int main()
{
    /*10.-guardar en el arreglo los valores que ingrese el usuario*/
    int valor = 0;
    cout << "ingrese la cantidad de numeros a guardar" << endl;
    cin >> valor;

    int valores[valor];

    for (int i = 0; i < valor; i++)
    {
        cout << "escriba un valor" << endl;
        cin >> valores[i];
    }

    /*2.-mostrar todo el contenido del arreglo*/
    cout << "valores del arreglo: [";
    for (int i = 0; i < valor; i++)
    {
        if (i < valor - 1){
            cout << valores[i] << ", ";
        }else{
        cout << valores[i]<<"]";
        }
    }
    cout << endl;

    /*3.-sumar todos los valores del arreglo*/
    int acum = 0;
    for (int i = 0; i < valor; i++)
    {
        acum += valores[i];
    }
    cout << "la suma de los valores del arreglo es: " << acum << endl;

    /*4.-obtener el valor maximo del arreglo*/
    int max = -3000;
    for (int i = 0; i < valor; i++){
        if(valores[i]>max){
            max = valores[i];
        }
    }
    cout << "el valor maximo del arreglo es: " << max << endl;
    return 0;
}
