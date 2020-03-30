#include <stdio.h>

int main ()
{
    float numPar, numImp;
    int resultado;

    printf ("Digite um numero par: ");
    scanf("%f", &numPar);
    printf ("Digite um numero impar: ");
    scanf("%f", &numImp);

    resultado = (int)(numPar/numImp);

    printf ("Resultado inteiro: %d", resultado);

    return 0;
}
