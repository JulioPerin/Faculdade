/*2) Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{

    char opcao;
    do // repetir o programa//
    {
        int matriz[5][5], i, j, k=0, l=0, linha[5] = {0} , coluna[5] = {0};

            gerarMatrizDe1aLimite(5, 5, matriz, 5);
            printf("=== MATRIZ ===\n");
            mostrarMatriz(5, 5, matriz);

            for(i=0; i<5; i++)
            {
                l=0;
                for(j=0; j<5; j++)
                {
                    linha[k] = matriz[i][j] + linha[k];
                    if(i==0)
                    {
                      coluna[i] = matriz[l][0] + coluna[i];
                      l++;
                    }
                    if(i==1)
                    {
                      coluna[i] = matriz[l][1] + coluna[i];
                      l++;
                    }
                    if(i==2)
                    {
                      coluna[i] = matriz[l][2] + coluna[i];
                      l++;
                    }
                    if(i==3)
                    {
                      coluna[i] = matriz[l][3] + coluna[i];
                      l++;
                    }
                    if(i==4)
                    {
                      coluna[i] = matriz[l][4] + coluna[i];
                      l++;
                    }
                }
                k++;
            }

        printf("=== Soma das linhas ===\n");
        k=0;
        for(k=0; k<5; k++)
        {
            printf("%d  ", linha[k]);
        }
        printf("\n=== Soma das colunas ===\n");
        k=0;
        for(k=0; k<5; k++)
        {
            printf("%d  ", coluna[k]);
        }


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');


    return 0;
}
