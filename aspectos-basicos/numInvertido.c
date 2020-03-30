#include <stdio.h>

int main ()
{
    int num, numAux = 0, n;

    printf ("Digite o numero: ");
    scanf("%d", &num);
    n = num;

    while (num != 0)
    {
        numAux *= 10;
        numAux += (num%10);
        num /= 10;
    }

    printf ("\nNumero original: %d\nNumero invertido: %d", n, numAux);
    return 0;
}
