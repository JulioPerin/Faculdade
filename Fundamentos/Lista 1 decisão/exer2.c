/* Escreva um programa que leia um n�mero e
verifique se ele � maior, menor ou igual a 10. */

#include <stdio.h>

int main(void)
{
    float num;

    printf("Informe um numero: ");
    scanf("%f", &num);

    if(num < 10)
    {
        printf("\nO numero e menor que 10");
    }
    if(num > 10)
    {
        printf("\nO numero e maior que 10");
    }
    if(num == 10)
    {
        printf("\nO numero e igual 10");
    }
    return 0;
}
