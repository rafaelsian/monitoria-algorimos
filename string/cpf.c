#include <stdio.h>

int main()
{
    char cpf[12];
    int i, soma = 0;

    gets(cpf);
    for (i=0; i<9; i++)
    {
        soma += cpf[i] * i+1;
    }

    printf("%d",(soma%11)+1);

    cpf[9] = (soma%11)+1;

    printf("%s",cpf);

    for (i=0; i<10; i++)
    {
        soma += cpf[i] * i;
    }
    cpf[10] = (soma%11)+1;

    printf("%d",(soma%11)+1);

    return 0;
}
