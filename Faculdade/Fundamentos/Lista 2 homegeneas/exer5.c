#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char opcao;
    do // repetir o programa//
    {
    int maximo1, maximo2, limite=10;

    do
    {
        printf("Informe o tamanho do vetor A: ");
        scanf("%d", &maximo1);
    }while(maximo1<=0);

    do
    {
        printf("Informe o tamanho do vetor A: ");
        scanf("%d", &maximo2);
    }while(maximo2<=0);


    int vetor1[maximo1];
    int vetor2[maximo2];



    gerarVetorde0aLimite1(limite, maximo1, vetor1, maximo2, vetor2);
    mostrarVetor5(maximo1, vetor1, maximo2, vetor2);

    printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
