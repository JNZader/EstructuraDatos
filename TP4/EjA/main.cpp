#include <iostream>
using namespace std;



void intercambio(int&x,int&y ){
int aux;
aux=x; x=y;
y=aux;	
}


int main(){
	int a=1,b=2;
	intercambio(a,b);
	cout<<a<<" "<<b;
	return 0;
}