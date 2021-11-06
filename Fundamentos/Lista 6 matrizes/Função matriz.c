#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    int matriz[3][2];

    gerarMatrizde0aLimite(3, 2, matriz, 10);

    printf("===MATRIZ====\n");
    mostrarMatriz(3, 2, matriz);



    return 0;
}
