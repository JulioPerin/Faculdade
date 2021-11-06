#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
    int limite=100;
    int maximo, i;

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &maximo);
    }while(maximo<=0);

    int vetor[maximo], vetorB[maximo];

   gerarVetorde0aLimite(limite, maximo, vetor);

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
            printf("%d ", vetor[i]);
        }





        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
