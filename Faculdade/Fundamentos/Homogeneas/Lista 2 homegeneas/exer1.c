/* 1) Gerar um vetor de inteiros com 15 elementos
aleat�rios entre 1 e 25 . Gerar outros dois vetores um
contendo o s valores pares e outro os �mpares Mostrar os tr�s vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
    int maximo=15, limite=25;


    int vetor[maximo];

    gerarVetorde0aLimite(limite, maximo, vetor);
    mostrarVetor(maximo, vetor);

    printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
