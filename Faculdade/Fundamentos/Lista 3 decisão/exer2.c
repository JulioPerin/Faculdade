/* Informar se é par ou impar e dizer se é divisivel por 5 */

#include <stdio.h>

int main(void)
{
    int num1, num2, resto1, resto2, resto3, resto4;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    resto1 = num1 % 5;
    resto2 = num2 % 5;
    if(resto1 == 0 && resto2 == 0)
    {
        printf("\nAmbos sao divisiveis por 5\n");
    }
    if(resto1 != 0 && resto2 == 0 || resto1 == 0 && resto2 != 0)
    {
        printf("\nApenas um deles eh divisivel por 5v");
    }
    if(resto1 != 0 && resto2 != 0)
    {
       printf("\nNenhum deles eh divisivel por 5\n");
    }

    resto3 = num1 % 2;
    resto4 = num2 % 2;

    if(resto1 == 0 && resto2 == 0)
    {
        printf("\nAmbos sao pares\n");
    }
    else if(resto1 != 0 && resto2 == 0 || resto1 == 0 && resto2 != 0)
    {
        printf("\nPelo menos um deles eh impar\n");
    }
     return 0;
}
