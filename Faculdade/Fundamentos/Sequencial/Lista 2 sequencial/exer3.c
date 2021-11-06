/* Escreva um programa que calcule o valor da
conversão para dólares de um valor lido em reais */

#include <stdio.h>

int main(void)
{
    float dol, real;

    printf("Informe o valor atual do dollar: ");
    scanf("%f", &dol);
    printf("Informe um valor em reais: ");
    scanf("%f", &real);

    printf("Valor total em dolares: %.2f", (real / dol));

    return 0;


}
