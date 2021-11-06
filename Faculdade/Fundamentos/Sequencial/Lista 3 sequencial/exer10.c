/*(DESAFIO) Obter o resto da divisão de dois valores
inteiros informados pelo usuário, sem usar o operador de resto.*/

#include <stdio.h>

int main(void)
    {
    int num1, num2, resultado, resto;

    printf("Informe um valor: ");
    scanf("%d",&num1);
    printf("Informe outro valor: ");
    scanf("%d",&num2);

    resultado = num1 / num2;
    resto = num1 - (resultado * num2);

    printf("\nO resto eh= %d", resto);
    return 0;


    }
