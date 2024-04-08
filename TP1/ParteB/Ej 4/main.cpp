/*
Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior,
 leyéndola durante un período de 24 
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día,
 la temperatura más alta y la más baja.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temp00, temp04, temp08, temp12,temp16,temp20;
    double tempMedia=0.0;
    double tempMax=-300;
    double tempMin=300;

    cout<<"ingrese la temperatura a la hora 00:";
    cin>>temp00;
    
    cout<<"ingrese la temperatura a la hora 04:";
    cin>>temp04;

    cout<<"ingrese la temperatura a la hora 08:";
    cin>>temp08;

    cout<<"ingrese la temperatura a la hora 12:";
    cin>>temp12;
    
    cout<<"ingrese la temperatura a la hora 16:";
    cin>>temp16;

    cout<<"ingrese la temperatura a la hora 20:";
    cin>>temp20;

    tempMedia= (temp00+temp04+temp08+temp12+temp16+temp20)/6;

    double tempDia[6]={temp00,temp04,temp08,temp12,temp16,temp20};
    
    for(int i=0;i<6;i++){
        if(tempDia[i] > tempMax){
            tempMax = tempDia[i];
        }
        
        if(tempDia[i] < tempMin){
            tempMin = tempDia[i];
        }
    }

    cout << fixed << setprecision(2);


    cout<<endl;
    cout<<"La temperatura media del dia es de:" <<tempMedia<< " grados Celsius." << endl;
    cout<<"la temperatura minima del dia es de:"<<tempMin<<" grados."<<endl;
    cout<<"la temperatura maxima del dia es de:"<<tempMax<<" grados."<<endl;
    return 0;
}