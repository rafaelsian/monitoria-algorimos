#include <stdio.h>

int main ()
{
    long unsigned int n, ni = 0, naux;
    printf("Digite um numero: ");
    scanf("%d",&n);

    naux = n;
    while (n > 0)
    {
        ni *= 10;
        ni += (n%10);
        n /= 10;
    }

    printf("Numero original: %d\nNumero invertido: %d",naux,ni);

    return 0;
}
