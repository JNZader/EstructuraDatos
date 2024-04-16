/*
 * Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
 */
#include <iostream>

using namespace std;

int main()
{
    bool esSimetrica = true;
    bool esTranspuesta = true;

    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int matrizFilas = sizeof(matriz) / sizeof(matriz[0]);
    int matrizColumnas = sizeof(matriz[0]) / sizeof(int);

    cout << "Matriz original:" << endl;
    for (int i = 0; i < matrizFilas; i++)
    {
        for (int j = 0; j < matrizColumnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if (matrizFilas == matrizColumnas)
    {
        cout << "La matriz es cuadrada" << endl;

        for (int i = 0; i < matrizFilas; i++)
        {
            for (int j = 0; j < matrizColumnas; j++)
            {
                if (matriz[i][j] != matriz[j][i])
                {
                    esSimetrica = false;
                    break;
                }
            }
            if (!esSimetrica)
            {
                break;
            }
        }

        if (esSimetrica)
        {
            cout << "La matriz es simetrica." << endl;
        }
        else
        {
            cout << "La matriz no es simetrica." << endl;
        }

        for (int i = 0; i < matrizFilas; i++)
        {
            for (int j = 0; j < matrizColumnas; j++)
            {
                if (matriz[i][j] != matriz[j][i])
                {
                    esTranspuesta = false;
                    break;
                }
            }
            if (!esTranspuesta)
            {
                break;
            }
        }

        if (esTranspuesta)
        {
            cout << "La matriz es transpuesta" << endl;
        }
        else
        {
            cout << "La matriz no es transpuesta " << endl;
        }
    }
    else
    {
        cout << "la matriz no es cuadrada por lo cual no es simetrica" << endl;
    }
    cout << endl;

    esSimetrica = true;
    esTranspuesta = true;
    int mTranspuesta[4][4] = {
        {1, 5, 9, 13},
        {2, 6, 10, 14},
        {3, 7, 11, 15},
        {4, 8, 12, 16}};

    int mTranspuestaFilas = sizeof(mTranspuesta) / sizeof(mTranspuesta[0]);
    int mTranspuestaColumnas = sizeof(mTranspuesta[0]) / sizeof(int);

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < mTranspuestaFilas; i++)
    {
        for (int j = 0; j < mTranspuestaColumnas; j++)
        {
            cout << mTranspuesta[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (matrizFilas == matrizColumnas)
    {
        cout << "La matriz es cuadrada" << endl;

        for (int i = 0; i < mTranspuestaFilas; i++)
        {
            for (int j = 0; j < mTranspuestaColumnas; j++)
            {
                if (mTranspuesta[i][j] != mTranspuesta[j][i])
                {
                    esSimetrica = false;
                    break;
                }
            }
            if (!esSimetrica)
            {
                break;
            }
        }

        if (esSimetrica)
        {
            cout << "La matriz es simetrica." << endl;
        }
        else
        {
            cout << "La matriz no es simetrica." << endl;
        }

        for (int i = 0; i < mTranspuestaFilas; i++)
        {
            for (int j = 0; j < mTranspuestaColumnas; j++)
            {
                if (mTranspuesta[i][j] != mTranspuesta[j][i])
                {
                    esTranspuesta = false;
                    break;
                }
            }
            if (!esTranspuesta)
            {
                break;
            }
        }

        if (esTranspuesta)
        {
            cout << "La matriz es transpuesta" << endl;
        }
        else
        {
            cout << "La matriz no es transpuesta " << endl;
        }
    }
    else
    {
        cout << "la matriz no es cuadrada por lo cual no es simetrica" << endl;
    }
    cout << endl;

    esSimetrica = true;
    esTranspuesta = true;
    int mSimetrica[4][4] = {
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 9},
        {4, 7, 9, 10}};

    int mSimetricaFilas = sizeof(mSimetrica) / sizeof(mSimetrica[0]);
    int mSimetricaColumnas = sizeof(mSimetrica[0]) / sizeof(int);

    cout << "Matriz simetrica:" << endl;
    for (int i = 0; i < mSimetricaFilas; i++)
    {
        for (int j = 0; j < mSimetricaColumnas; j++)
        {
            cout << mSimetrica[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (matrizFilas == matrizColumnas)
    {
        cout << "La matriz es cuadrada" << endl;

        for (int i = 0; i < mSimetricaFilas; i++)
        {
            for (int j = 0; j < mSimetricaColumnas; j++)
            {
                if (mSimetrica[i][j] != mSimetrica[j][i])
                {
                    esSimetrica = false;
                    break;
                }
            }
            if (!esSimetrica)
            {
                break;
            }
        }

        if (esSimetrica)
        {
            cout << "La matriz es simetrica." << endl;
        }
        else
        {
            cout << "La matriz no es simetrica." << endl;
        }

        for (int i = 0; i < mSimetricaFilas; i++)
        {
            for (int j = 0; j < mSimetricaColumnas; j++)
            {
                if (mSimetrica[i][j] != mSimetrica[j][i])
                {
                    esTranspuesta = false;
                    break;
                }
            }
            if (!esTranspuesta)
            {
                break;
            }
        }

        if (esTranspuesta)
        {
            cout << "La matriz es transpuesta" << endl;
        }
        else
        {
            cout << "La matriz no es transpuesta " << endl;
        }
    }
    else
    {
        cout << "la matriz no es cuadrada por lo cual no es simetrica" << endl;
    }

    return 0;
}