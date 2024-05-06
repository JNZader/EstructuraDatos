/*
5. Se deben ingresa un par de frases por teclado, luego determine las mismas coinciden hasta la 5ta letra
(strncasecmp). Ejemplo: “La Vida es Bella” y “la VIRTUD de los grandes” coinciden. Nos dirá si además de
coincidir, contiene la subcadena “la” en ambas frases, solo una de ellas, o no la contiene. (use strstr).
*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
const int BYTES = 5;

int main()
{
    string frase1;
    string frase2;

    cout << "Ingrese la primera frase: ";
    cin >> frase1;

    cout << "Ingrese la segunda frase: ";
    cin >> frase2;

    if (strncasecmp(frase1.c_str(), frase2.c_str(), BYTES) == 0)
    {
        cout << "Las primeras 5 letras coinciden en ambas frases." << endl;

        if (strstr(frase1.c_str(), "la") && strstr(frase2.c_str(), "la"))
        {
            cout << "Ambas frases contienen la subcadena \"la\"." << endl;
        }
        else if (strstr(frase1.c_str(), "la"))
        {
            cout << "Solo la primera frase contiene la subcadena \"la\"." << endl;
        }
        else if (strstr(frase2.c_str(), "la"))
        {
            cout << "Solo la segunda frase contiene la subcadena \"la\"." << endl;
        }
        else
        {
            cout << "Ninguna de las frases contiene la subcadena \"la\"." << endl;
        }
    }
    else
    {
        cout << "Las primeras 5 letras no coinciden en ambas frases." << endl;
    }
    return 0;
}
