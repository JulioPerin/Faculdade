/* Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima: */

#include <stdio.h>

int main(void)
{
    float peso;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("\nPeso em gramas: %.2f", peso * 1000);
    printf("\nPeso em gramas caso engorde %%12: %.2f",  (peso + (peso * 0.12)) * 1000);
    printf("\nPeso em kgs caso engorde %%12: %.2f",  peso + (peso * 0.12));

    return 0;

}
