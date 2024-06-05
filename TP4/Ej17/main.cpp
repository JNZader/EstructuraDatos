/**
 *
 * 17. Un número es primo si solo es divisible por la unidad y por si mismo.
 *  Defina una función que determina si un número es primo, debe recibir el número y retornar verdadero o falso.
 * Realice un programa que, de 2 opciones, 1). Determinar si un número es primo
 * 2). Calcular todos los números primos menores a un número ingresado por el usuario.
 * El usuario debe poder realizar estas opciones todas las veces que desee.
 *
 */

#include <iostream>

using namespace std;

bool esPrimo(int numero)
{
	if (numero < 2)
	{
		return false;
	}

	for (int i = 2; i * i <= numero; i++)
	{
		if (numero % i == 0)
		{
			return false;
		}
	}

	return true;
}

void calcularPrimos(int numero)
{
	for (int i = 2; i <= numero; i++)
	{
		if (esPrimo(i))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	cout << endl;
}

int main()
{
	int opcion;
	int numero;

	while (true)
	{
		cout << "1. Determinar si un numero es primo" << endl;
		cout << "2. Calcular todos los numeros primos menores a un numero" << endl;
		cout << "3. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Ingrese un numero: ";
			cin >> numero;
			cout << endl;
			cout << (esPrimo(numero) ? to_string(numero) + " es primo" : to_string(numero) + " no es primo") << endl;
			cout << endl;
			break;
		case 2:
			cout << "Ingrese un numero: ";
			cin >> numero;
			cout << endl;
			calcularPrimos(numero);
			break;
		case 3:
			return 0;
		default:
			cout << "Opcion invalida. Intente de nuevo." << endl;
			break;
		}
	}

	return 0;
}