/* 5) Calcular o imposto de renda de uma pessoa */

#include <stdio.h>

int main(void)
{
    float anual;

    printf("Informe sua renda anual: ");
    scanf("%f", &anual);

    if(anual < 0)
    {
        printf("\nValor invalido\n");
    }
    else if(anual <= 10000)
    {
       printf("\nNao paga imposto de renda\n");
    }

    else if(anual > 10000 && anual < 25000)
    {
        printf("\nO valor a ser pagado eh de %.2f\n", anual * 0.1);
    }

    else if(anual > 25000)
    {
        printf("\nO valor a ser pagado eh de %.2f\n", anual * 0.25);
    }
    return 0;
}
