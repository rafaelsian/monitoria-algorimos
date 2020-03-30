#include <stdio.h>

int main ()
{
    float salario, salarioLiquido, imposto;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    if (salario >= 10000)
    {
        imposto = salario * 0.15;
        salarioLiquido = salario - imposto;
    }
    else
    {
        imposto = salario * 0.05;
        salarioLiquido = salario - imposto;
    }

    printf ("\nValor liquido do salario: %f\nValor bruto do salario: %f\nValor do imposto: %f", salarioLiquido, salario, imposto);

    return 0;
}
