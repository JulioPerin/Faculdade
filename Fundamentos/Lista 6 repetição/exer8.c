/*
8) Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao
usuário o número máximo (deve ser positivo).
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int num, i, j;

    do // repetir o programa//
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido\n");
            }
        }
        while(num<=0);

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d  ", j);
            }
            printf("\n");
        }

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
