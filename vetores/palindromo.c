#include <stdio.h>

int main()
{
    int v[4], num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    v[0] = num/1000;
    v[1] = ((((num/100) * 100)-((num/1000) * 1000))/100);
    v[2] = ((((num/10) * 10)-((num/100) * 100))/10);
    v[3] =  num - ((num/10) * 10);

    if (v[0]==v[3] && v[1]==v[2])
    {
        printf("\nE um numero palindromo");
    }
    else
    {
        printf("\nNao e um numero palindromo");
    }
    return 0;
}
