#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
#include "divisores.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
    int limSup=20, limInf=5;
    int maximo=20, i;
    int vetor[maximo];

   gerarVetorInteiroComFaixa(vetor, maximo, limInf, limSup);

  printf("===Vetor Original===\n");

   for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);
    }

     i=0;
    ordenaVetor(vetor, maximo);
    printf("\n===VETOR ORDENADO ===\n");

    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);
    }

    printf("\n");
    somadiv(vetor, maximo);






        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
