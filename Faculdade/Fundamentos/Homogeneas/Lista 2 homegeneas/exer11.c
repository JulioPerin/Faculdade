#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        int maximo=30, limite=99;
        int vetor[maximo];

        gerarVetorde0aLimite2(limite, maximo, vetor);
        mostrarVetor9(maximo, vetor);





        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}