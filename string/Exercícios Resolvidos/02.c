#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[100], palavra2[100], letra;
    int i;

    printf ("Digite a primeira palavra: ");
    fflush(stdin);
    gets(palavra1);

    printf ("Digite a segunda palavra: ");
    fflush(stdin);
    gets(palavra2);

    i = strcmp(palavra1, palavra2);

    if (i == 0)
    {
        printf("As palavras sao iguais!");
    }
    else
    {
        printf("As palavras nao sao iguais!");
    }

    return 0;
}
