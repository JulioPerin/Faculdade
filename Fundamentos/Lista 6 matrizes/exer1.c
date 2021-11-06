#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        int matriz[3][3], i, j, soma=0, somadp=0, somads=0;

        gerarMatrizDe1aLimite(3, 3, matriz, 10);
        printf("=== MATRIZ ===\n");
        mostrarMatriz(3, 3, matriz);

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i==j)
                {
                    somadp = somadp + matriz[i][j];
                }
                soma = soma + matriz[i][j];

                if(i+j == 2)
                {
                    somads = somads + matriz[i][j];
                }
            }
        }

        printf("\nSoma dos elementos da matriz: %d\n", soma);
        printf("Soma dos elementos da DP: %d\n", somadp);
        printf("Soma dos elementos da DS: %d\n", somads);


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
