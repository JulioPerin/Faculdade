/* Dizer se um numero de 4 digitos é um palindromo */

#include <stdio.h>

int main(void)
{
    float mil, cent, dez, uni, palin;
    int mil2, cent2, dez2, uni2;

    printf("Informe um numero de 4 digitos= ");
    scanf("%f", &palin);

    mil = palin / 1000;
    cent = (mil - (int)mil) * 10;
    dez = ((int)palin % 100) / 10;
    uni = (int)palin % 10;

    mil2 = (int)mil;
    cent2 = (int)cent;
    dez2 = (int)dez;
    uni2 = (int)uni;

    if(mil2 == uni2 && cent2 == dez2)
    {
        printf("\nEh um numero palindromo\n");
    }
    else
    {
        printf("\nNao eh palindromo\n");
    }

    return 0;
}
