/*3) Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as diagonais principal e secundária e mostrar a matriz.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{

    char opcao;
    do // repetir o programa//
    {
        int matriz[11][11], i, j;

            gerarMatrizDe1aLimite(11, 11, matriz, 1);
            printf("=== MATRIZ ORIGINAL ===\n");
            mostrarMatriz(11, 11, matriz);

            printf("=== MATRIZ MODIFICADA ===\n");

             for(i=0; i<=10; i++)
            {
                for(j=0; j<=9; j++)
                {
                    if(i==j)
                    {
                        matriz[i][j] = 0;
                    }
                    if(i+j==10)
                    {
                       matriz[i][j] = 0;
                    }

                }
            }

            i=0;
            j=0;
             for(i=0; i<=10; i++)
            {
                for(j=0; j<=10; j++)
                {

                    printf(" %d  ", matriz[i][j]);
                }
                printf("\n");
            }






        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');


    return 0;
}
