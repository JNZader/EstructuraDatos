#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;


struct Abuela {
   char nombre[20];
   int edad;
   char hobby[20];
   
   
};

void modificarAbuela(struct Abuela *abue1)
{    
strcpy((*abue1).nombre, "mariana");
(*abue1).edad=91;
strcpy((*abue1).hobby, "tejer,amasar,bordar");

};

int main(){
	Abuela abue1;
	strcpy(abue1.nombre, "Veronica");
	abue1.edad=80;
	strcpy(abue1.hobby,"leer");

cout<<"\nel nombre de la abuela es "<<abue1.nombre<<endl;
cout<<"\nla edad de la abuela es "<<abue1.edad<<endl;
cout<<"\nel hobby de la abuela es "<<abue1.hobby<<endl;

cout<<"\nlos datos modificados por la referencia son "<<endl;

modificarAbuela(&abue1);
cout<<"\nel nombre de la abuela es "<<abue1.nombre<<endl;
cout<<"\nla edad de la abuela es "<<abue1.edad<<endl;
cout<<"\nel hobby de la abuela es "<<abue1.hobby<<endl;

}