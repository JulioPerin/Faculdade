/* Ler um número e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele: é divisível por 5, por 3 ou por 2 */

#include <stdio.h>

int main(void)
{
    int num, div5, div3, div2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    div5 = num % 5;
    div3 = num % 3;
    div2 = num % 2;

    if(div5 == 0 && div3 == 0 && div2 == 0)
    {
        printf("eh divisivel por 5, 3 e 2");
    }

    else if(div5 == 0 && div3 == 0 && div2 != 0)
    {
        printf("\nDivisivel apenas por 5 e por 3\n");
    }

    else if(div5 == 0 && div3 != 0 && div2 == 0)
    {
        printf("\nDivisivel apenas por 5 e por 2v");
    }
    else if(div5 != 0 && div3 == 0 && div2 == 0)
    {
        printf("\nDivisivel apenas por 3 e por 2\n");
    }

    else if(div5 == 0 && div3 != 0 && div2 != 0)
    {
        printf("\nDivisivel apenas por 5\n");
    }
    else if(div5 != 0 && div3 == 0 && div2 != 0)
    {
        printf("\nDivisivel apenas por 3\n");
    }
    else if(div5 != 0 && div3 != 0 && div2 == 0)
    {
        printf("\nDivisivel apenas por 2\n");
    }
    else
    {
        printf("\nNao eh divisivel por 5, 3 ou 2\n");
    }
    return 0;
}
