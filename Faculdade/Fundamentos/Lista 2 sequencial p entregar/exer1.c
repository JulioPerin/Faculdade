/*Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float custo, convite, ingtot, lucro;

    printf("Informe o valor de custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Informe o valor do convite: ");
    scanf("%f", &convite);

    ingtot = custo / convite;
    printf("\nPara cobrir o custo do espetaculo e necessario vender %.1f", ingtot);

    lucro = (custo + (custo * 0.25)) / convite;
    printf("\nPara lucrar e necessario vender %.1f", ceil(lucro));

    return 0;




}
