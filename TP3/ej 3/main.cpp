/*Escribe un programa que pida al conductor la patente del vehículo consistente en
 2 letras al inicio, 3 números, y 2 letras más al final.
 Al ingresarla, se debe cargar anexando un guion (separada por guiones). Ejemplo: AE-529-QZ. Usa strtok,
 para separar los 3 grupos, y mostrarlos individualmente. Validar la longitud de los grupos. Use strlen y strcat.*/
 
 #include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 50

int main() {
    char patente[MAX_LENGTH];

    printf("Ingrese la patente del vehiculo (formato: LL-NNN-LL): ");
    scanf("%s", patente);

    if (strlen(patente) != 9) {
        printf("La patente ingresada no tiene el formato correcto. Debe tener 7 caracteres.\n");
        return 1; // Salir del programa con codigo de error
    }

    char *grupo;
    char grupo1[3], grupo2[4], grupo3[3];

    grupo = strtok(patente, "-");
    strcpy(grupo1, grupo);

    grupo = strtok(NULL, "-");
    strcpy(grupo2, grupo);

    grupo = strtok(NULL, "-");
    strcpy(grupo3, grupo);

    if (strlen(grupo1) != 2 || strlen(grupo2) != 3 || strlen(grupo3) != 2) {
        printf("La patente ingresada no tiene el formato correcto.\n");
        return 1; // Salir del programa con codigo de error
    }

    printf("\nGrupo 1: %s\n", grupo1);
    printf("Grupo 2: %s\n", grupo2);
    printf("Grupo 3: %s\n", grupo3);

    return 0;
}

/*B- Bolsa de trabajo. Escribir las siguientes estructuras anidadas:
?    Persona con al menos 20 caracteres para el nombre, edad, peso y la fecha de nacimiento, que debe ser una Fecha
?    Fecha es una estructura compuesta de su dia, mes y anio.
1.    Pedir en el main, los datos de la persona y precargar a Verónica, edad 20, peso 45, nacida el 2 de diciembre de 1997.
?    Escribir la estructura Empleado que es, una persona con un salario y fecha de contratación.
2.    Desde el main creamos a Esteban de 19 años que pesa 60kg, y cumple años el 22 de julio de 1998. Esteban cuenta con un salario de $ 351.667.19.
3.    Desde el main, nos ocuparemos de mostrar tanto a Esteban como a Verónica.
4.    Declarar un arreglo de trabajadores, y cargar a Esteban y dos trabajadores adicionales, luego mostrar todos sus campos


	esteban.fechaDeContratacion=esteban.persona.fechaNacimiento;
	falta fecha de contratacion


#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

struct Fecha {
    int dia, mes, anio;
};

struct Persona {
    char nombre[20];
    int edad;
    float peso;
    Fecha fechaNacimiento;
};

struct Empleado {
    Persona persona;
    float salario;
    Fecha fechaDeContratacion;
};

int maaaaaaaaaain() {
    Empleado trabajadores[3];

    Persona veronica;
    strcpy_s(veronica.nombre, "Veronica");
    veronica.edad = 20;
    veronica.peso = 45;
    veronica.fechaNacimiento.dia = 2;
    veronica.fechaNacimiento.mes = 12;
    veronica.fechaNacimiento.anio = 1997;

    Empleado esteban;
    strcpy_s(esteban.persona.nombre, "Esteban");
    esteban.persona.edad = 19;
    esteban.persona.peso = 60;
    esteban.persona.fechaNacimiento.dia = 22;
    esteban.persona.fechaNacimiento.mes = 07;
    esteban.persona.fechaNacimiento.anio = 1998;
    esteban.salario = 351667.19;
    esteban.fechaDeContratacion = esteban.persona.fechaNacimiento;

    Empleado juan;
    strcpy_s(juan.persona.nombre, "Juan");
    juan.persona.edad = 21;
    juan.persona.peso = 70;
    juan.persona.fechaNacimiento.dia = 22;
    juan.persona.fechaNacimiento.mes = 07;
    juan.persona.fechaNacimiento.anio = 1993;
    juan.salario = 351667.19;
    juan.fechaDeContratacion = juan.persona.fechaNacimiento;

    Empleado lucas;
    strcpy_s(lucas.persona.nombre, "Lucas");
    lucas.persona.edad = 25;
    lucas.persona.peso = 64;
    lucas.persona.fechaNacimiento.dia = 22;
    lucas.persona.fechaNacimiento.mes = 07;
    lucas.persona.fechaNacimiento.anio = 1992;
    lucas.salario = 351667.19;
    lucas.fechaDeContratacion = lucas.persona.fechaNacimiento;

    trabajadores[0] = esteban;
    trabajadores[1] = juan;
    trabajadores[2] = lucas;

    for (int i = 0; i < 3; i++) {
        cout << "Informacion del trabajador " << i + 1 << ":" << endl;
        cout << "Nombre: " << trabajadores[i].persona.nombre << endl;
        cout << "Edad: " << trabajadores[i].persona.edad << endl;
        cout << "Peso: " << trabajadores[i].persona.peso << endl;
        cout << "Fecha de nacimiento: " << trabajadores[i].persona.fechaNacimiento.dia << "/"
            << trabajadores[i].persona.fechaNacimiento.mes << "/" << trabajadores[i].persona.fechaNacimiento.anio << endl;
        cout << "Salario: $" << trabajadores[i].salario << endl;
        cout << "Fecha de contratacion: " << trabajadores[i].fechaDeContratacion.dia << "/"
            << trabajadores[i].fechaDeContratacion.mes << "/" << trabajadores[i].fechaDeContratacion.anio << endl << endl;
    }

    return 0;
}
*/