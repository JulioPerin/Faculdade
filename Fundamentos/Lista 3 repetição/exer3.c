/*
3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n
*/

#include <stdio.h>

int main(void)
{
    int i, num;
    float soma;
    char opcao;

    do // repetir o programa//
    {
        soma=1;

        printf("Informe um numero: ");
        scanf("%d", &num);

        for(i=1; i<=num; i++)
            {
            soma = soma + (1/(float)i);

            if(i == num)
            {
                printf("1/%d = ", i);
            }
            else
            {
                printf("1/%d + ", i);
            }
        }

        printf(" %.2f", soma);
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

