#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3, media;

    printf("Digite as notas 1, 2 e 3 respectivamente: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf ("Media das tres notas: %f", media);

    return 0;
}
