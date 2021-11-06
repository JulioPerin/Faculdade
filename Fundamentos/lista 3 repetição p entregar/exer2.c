/*
2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um programa que
obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem
valor depreciado
Mostrar os resultados com
o no exemplo a seguir:
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int tempo, i;
    float aux, bem, depreciado, valdepreciado;


    do // repetir o programa//
    {
        do
        {
            printf("Informe o valor do bem a ser depreciado: ");
            scanf("%f", &bem);
            if(bem<=0)
            {
                printf("\nValor invalido\n");
            }
        }
        while(bem<=0);

        do
        {
            printf("Informe o periodo de depreciacao(em anos): ");
            scanf("%d", &tempo);
            if(tempo<=0)
            {
                printf("\nValor invalido\n");
            }
        }
        while(tempo<=0);

        aux = bem;

        printf("Ano                       Valor do bem                          Depreciacao                     Valor depreciado");
        printf("\n============================================================================================================\n");

        for(i=1; i<=tempo; i++)
        {
            depreciado = bem * 0.015;
            valdepreciado = bem - depreciado;

            printf("%d\t                     ", i);
            printf("%.2f\t                         ", bem);
            printf("%.2f\t                         ", depreciado);
            printf("%.2f\t                         ", valdepreciado);
            printf("\n");

            bem = valdepreciado;

        }
        printf("============================================================================================================\n");
        printf("Depreciacao acumulada %.2f", aux-bem);




        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);


    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
