#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{
    int matriz[3][3], i, j, soma=0, somadp=0, somads=0;

    gerarMatrizDe1aLimite(3, 3, matriz, 10);

    printf("===MATRIZ====\n");
    mostrarMatriz(3, 3, matriz);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            soma = soma + matriz[i][j];
            if(i==j)
            {
                somadp = somadp + matriz[i][j];
            }
            if(i+j == 3-1)
            {
                somads = somads + matriz[i][j];
            }
        }
    }

    printf("\nSoma dos elementos da matriz %d\n", soma);
    printf("\nSoma dos elementos da DP da matriz: %d\n", somadp);
    printf("\nSoma dos elementos da DS da matriz: %d\n", somads);



    return 0;
}
