/*
7) O Tri�ngulo de Floyd � um tri�ngulo formado com n�meros naturais.
O tri�ngulo come�a em 1 no canto superior esquerdo e continua a e
screver a sequ�ncia de n�meros naturais de tal modo que cada linha
cont�m um n�mero a mais do que a linha anterior. Escreva um programa
que leia um n�mero inteiro positivo n e em seguida imprima n linhas
do Tri�ngulo de Floyd.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int num, i, j, aux;

    do//repetir programa
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
        }while(num<=0);

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=i; j++)
            {
                aux++;
                printf("%d  ", aux);

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
