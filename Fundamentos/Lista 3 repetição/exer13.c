/*
13) Apresente os múltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostre os valores separados por uma tabulação e em colunas com 8 números por linha.
*/

#include <stdio.h>

int main(void)
{
    int i, cont;
    char opcao;

    do // repetir o programa//
    {
        cont=0;

    for(i=1000; i>=0;i=i-10)
    {
        printf("%d ", i);
        cont++;
        if(cont % 8 == 0)
        {
            printf("\n");
        }
    }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
