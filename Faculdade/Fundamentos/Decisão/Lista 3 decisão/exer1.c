#include <stdio.h>

int main(void)
{
    int num1, num2, resto;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        resto = num1 % num2;
        printf("\nO resto eh = %d\n", resto);
    }
    else if(num2 > num1)
    {
        resto = num2 % num1;
        printf("\nO resto da divisao eh =%f\n", resto);
    }
    else if(num1 || num2 == 0)
    {
        printf("\nNao eh possivel realizar divisao por zero\n");
    }

    return 0;
}
