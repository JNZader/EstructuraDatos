/*
A- Master chef. Diseñe un struct Ingrediente en el que se ingrese producto, gramos, fecha de elaboración, y sus
respectivos precios, para la preparación de un struct Plato, que tiene una receta, tiempo (hora-minuto), y un
arreglo de 4 ingredientes.
Además, el platillo contendrá 2 Condimentos, estructura tipo enum que tiene: Sal, Pimienta, Ajo, Oregano, Perjil,
Aceite.
o Precargar dos Ingrediente con strcpy: Cebollas, 150gr. $399.9, Caldos: 38gr. 150$ el cubo, Morrón 82gr. $456.
o Crear dos Ingrediente leído con getline: Ej. Hongos, 25gr. $345 y Pechuga 350gr. $959.99
o Crear un platillo a partir de esos ingredientes
o Mostrar el plato y sus ingredientes.
o Mostrar el costo final a gastar en dos platillos diferentes.
*/
#include <iostream>
#include <string>

using namespace std;

enum class Condimento
{
    Sal,
    Pimienta,
    Ajo,
    Oregano,
    Perjil,
    Aceite
};

struct Fecha
{
    int dia, mes, anio;
};

struct Ingrediente
{
    string producto;
    int gramos;
    float precio;
    Fecha fechaElaboracion;
};

struct Plato
{
    string receta;
    string tiempo;
    Ingrediente ingredientes[4];
    Condimento condimentos[2];
};

int main()
{
    Ingrediente cebollas = {"Cebollas", 150, 399.9, {1, 1, 2024}};
    Ingrediente caldos = {"Caldos", 38, 150, {1, 1, 2024}};

    Ingrediente hongos, pechuga;
    cout << "Ingrese los datos para los hongos:" << endl;
    cout << "Producto: ";
    getline(cin, hongos.producto);
    cout << "Gramos: ";
    cin >> hongos.gramos;
    cout << "Precio: ";
    cin >> hongos.precio;
    cin.ignore();

    cout << "Ingrese los datos para la pechuga:" << endl;
    cout << "Producto: ";
    getline(cin, pechuga.producto);
    cout << "Gramos: ";
    cin >> pechuga.gramos;
    cout << "Precio: ";
    cin >> pechuga.precio;
    cin.ignore();

    Plato plato;
    plato.receta = "Receta del plato";
    plato.tiempo = "1 hora";
    plato.ingredientes[0] = cebollas;
    plato.ingredientes[1] = caldos;
    plato.ingredientes[2] = hongos;
    plato.ingredientes[3] = pechuga;
    plato.condimentos[0] = Condimento::Sal;
    plato.condimentos[1] = Condimento::Pimienta;

    cout << "Plato:" << endl;
    cout << "Receta: " << plato.receta << endl;
    cout << "Tiempo: " << plato.tiempo << endl;
    cout << "Ingredientes:" << endl;
    for (const auto &ingrediente : plato.ingredientes)
    {
        cout << "- " << ingrediente.producto << ", " << ingrediente.gramos << " gramos, $" << ingrediente.precio << endl;
    }
    cout << "Condimentos:" << endl;
    for (const auto &condimento : plato.condimentos)
    {
        switch (condimento)
        {
        case Condimento::Sal:
            cout << "- Sal" << endl;
            break;
        case Condimento::Pimienta:
            cout << "- Pimienta" << endl;
            break;
        case Condimento::Ajo:
            cout << "- Ajo" << endl;
            break;
        case Condimento::Oregano:
            cout << "- Oregano" << endl;
            break;
        case Condimento::Perjil:
            cout << "- Perjil" << endl;
            break;
        case Condimento::Aceite:
            cout << "- Aceite" << endl;
            break;
        }
    }

    float costo_total = plato.ingredientes[0].precio + plato.ingredientes[1].precio +
                        plato.ingredientes[2].precio + plato.ingredientes[3].precio;
    cout << "Costo total para el plato: $" << costo_total << endl;
    return 0;
}