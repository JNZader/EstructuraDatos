#include <stdio.h>

void pasoPorReferencia(int **referencia)
{
    int *cambio, x = 2;
    cambio = &x;
    *referencia = cambio;
}

int main(){
    int *a, n = 13;

    a = &n;

    printf("Valor al que apunta a: %i\n", *a);
    pasoPorReferencia(&a);
    printf("Valor al que apunta a tras llamar a paso Por referencia: %i\n", *a);

    return 0;
}