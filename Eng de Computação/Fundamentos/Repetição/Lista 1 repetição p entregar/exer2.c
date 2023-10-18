/*
2) Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 entre 200 e 100.
*/

#include <stdio.h>

int main(void)
{
    int i;
    char opcao;

    do // repetir o programa//
    {
        for(i=200; i>=100; i--)
        {
            if(i%3 == 0)
            {
                printf(" %d ", i);
            }
        }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
