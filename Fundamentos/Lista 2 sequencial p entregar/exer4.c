/*Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float altura, peso;

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Seu IMC eh= %.2f", peso / pow(altura, 2));

    return 0;
}
