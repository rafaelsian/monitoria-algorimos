#include <stdio.h>
#define n 10

int main()
{
    int vOpiniao[n], vIdade[n], i, porc2=0, porc3=0, med4=0, aci5=0, resp=0;
    for(i=0; i<n; i++)
    {
        printf("Informe a sua idade: ");
        scanf("%d",&vIdade[i]);
        printf("\nDigite a sua opniao: ");
        scanf("%d",&vOpiniao[i]);
    }

    for(i=0; i<n; i++)
    {
        if(vOpiniao[i] == 1)
            resp++;
    }
    printf("Quantidade de pessoas: %d",resp);




}
