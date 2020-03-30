#include <stdio.h>

int main()
{
    int horario[5][6], materias[8] i, j, loop = 1, op;

    while (loop)
    {
        printf("Digite a opcao desejada:\n\t1. Incluir Disciplina\n\t2. Excluir Disciplina\n\t3. Mostrar Horarios\n\t4. Sair");
        scanf("%d",&op);
        system("cls");

        if(op == 1)
        {


        }
        else if (op == 2)
        {


        }
        else if (op == 3)
        {


        }
        else if (op == 4)
        {
            loop = 0;
        }
    }




    for(j=0; j<6; j++)
    {
        for(i=0; i<5; i++)
        {
            printf("Digite um numero: %d %d ",i,j);
            scanf("%d",&horario[i][j]);
        }
    }

    printf("\n\n");

    for(j=0; j<6; j++)
    {
        for(i=0; i<5; i++)
        {
            printf("%d",horario[i][j]);
        }
        printf("\n\n");
    }



    return 0;
}
