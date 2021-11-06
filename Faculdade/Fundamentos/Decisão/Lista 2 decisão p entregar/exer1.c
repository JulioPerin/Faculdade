/* Elaborar um programa que receba como entrada o valor do salário mínimo
e o valor do salário bruto, calcule o INSS e o salário líquido restante e informe-os. */

#include <stdio.h>

int main(void)
{
    float bruto, liq, min, min2;

    printf("Informe o salario minimo: ");
    scanf("%f", &min);
    printf("Informe o salario bruto: ");
    scanf("%f", &bruto);

    min2 = min * 3;

    if(min2 > bruto)
    {
        printf("\nINSS=%.2f", (bruto * 0.1));
        printf("\nSalario liquido=%.2f", (bruto - (bruto * 0.1)));
    }
    else if (min2 <= bruto)
    {
        printf("\nINSS=%.2f", (bruto * 0.08));
        printf("\nSalario liquido=%.2f", (bruto - (bruto * 0.08)));
    }
}
