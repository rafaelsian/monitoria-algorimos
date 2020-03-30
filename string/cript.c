#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1000], sC[1000], sI[1000];
    int i, k;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(s);
    printf("Digite a constante: ");
    scanf("%d", &k);

    for (i=0; i<strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            sC[i] = ('a' + (k-1));
        }
        else
        {
            sC[i] = s[i] + k;
        }
    }

    for (i=strlen(s)-1; i>=0; i--)
    {
        printf("%c",sC[i]);
    }

    return 0;
}
