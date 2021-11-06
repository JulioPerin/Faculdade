/*
3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5.
*/

#include <stdio.h>

int main(void)
{
    float i;
    char opcao;

    do // repetir o programa//
    {
        for(i=10; i>=0; i=i-0.5)
        {
            printf(" %.2f ", i);
        }

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

