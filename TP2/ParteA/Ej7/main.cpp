/*
 * Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el
 * contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer
 * vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la
 * salida estándar.
 */
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int long1, long2;
    cout << "debe definir 2 arrays de caracteres, de que longitud quiere que sea el primero?" << endl;
    cin >> long1;

    char array1[long1];

    cout << "ingrese los " << long1 << " elementos del array" << endl;

    for (int i = 0; i < long1; i++)
    {
        cout << "ingrese el elemento " << i + 1 << " del array" << endl;
        array1[i] = getch();
    }

    cout << "de que longitud quiere que sea el segundo?" << endl;
    cin >> long2;

    char array2[long2];

    for (int i = 0; i < long2; i++)
    {
        cout << "ingrese el elemento " << i + 1 << " del array" << endl;
        array2[i] = getch();
    }

    char array3[long1 + long2];
    for (int i = 0; i < long1; i++)
    {
        array3[i] = array1[i];
    }
    for (int i = 0; i < long2; i++)
    {
        array3[i + long1] = array2[i];
    }

    cout << "el array resultante es: " << endl;
    for (int i = 0; i < long1 + long2; i++)
    {
        cout << array3[i] << " ";
    }

    return 0;
}