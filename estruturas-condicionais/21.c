#include <stdio.h>

int main ()
{
    int placa, placaAux = 0;

    printf ("Digite os numeros da placa: ");
    scanf ("%d", &placa);

    placaAux += (placa%10);

    if (placaAux == 0)
    {
        printf ("\nMes de renovacao: Marco");
    }
    else if (placaAux == 1)
    {
        printf ("\nMes de renovacao: Abril");
    }
    else if (placaAux == 2)
    {
        printf ("\nMes de renovacao: Maio");
    }
    else if (placaAux == 3)
    {
        printf ("\nMes de renovacao: Junho");
    }
    else if (placaAux == 4)
    {
        printf ("\nMes de renovacao: Julho");
    }
    else if (placaAux == 5)
    {
        printf ("\nMes de renovacao: Agosto");
    }
    else if (placaAux == 6)
    {
        printf ("\nMes de renovacao: Setembro");
    }
    else if (placaAux == 7)
    {
        printf ("\nMes de renovacao: Outubro");
    }
    else if (placaAux == 8)
    {
        printf ("\nMes de renovacao: Novembro");
    }
    else
    {
        printf ("\nMes de renovacao: Dezembro");
    }

    return 0;
}
