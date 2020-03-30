#include <stdio.h>
#include <string.h>

int main ()
{
    int i, tam;
    char nome[100], silva[] = "silva";

    printf ("Digite o nome: ");
    fflush(stdin);
    gets(nome);

    tam = strlen(nome);

    for (i=tam-1; i>=0; i--)
    {
        if(nome[i] != ' ')
        {
            nome[i] = '\0';
        }
        else
        {
            break;
        }
    }

    strcat(nome,silva);

    printf ("\n%s", nome);

    return 0;
}
