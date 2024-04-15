/*
 * Ejercicio 9: Hacer un programa en C++ que muestre en pantalla un tablero de ajedrez con:
1. - Los peones con la letra P.
2. - Las torres con la letra T.
3. - Los caballos con la letra C.
4. - Los alfiles con la letra A.
5. - El rey con la letra K.
6. - La reina con letra Q.
• Mover el peón en la casilla diagonal al alfil Tablero [1][4], y mostrar el tablero resultante.
• Repetir esto, para el alfil en [0][5], solo podría salir si el peón se ha movido, sino informarlo.
 */
#include <iostream>

using namespace std;

int main()
{
    char tablero[][8] = {
        {'T', 'C', 'A', 'Q', 'K', 'A', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'t', 'c', 'a', 'q', 'k', 'a', 'c', 't'}};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    
    tablero[1][4] = ' ';
    tablero[3][4] = 'P';

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    if (tablero[1][4] == ' ')
    {
        tablero[0][5] = ' ';
        tablero[4][1] = 'A';

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << tablero[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "no se puede mover el arfil" << endl;
    }

    return 0;
}