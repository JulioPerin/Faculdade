/*
4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.
*/

#include <stdio.h>

int main(void)
{
    int i, soma=0, cont=0;
    float media;

    printf("\n================================  MULTIPLOS DE 4 OU DE 10  ====================================================\n\n");

    for(i=500; i>=0; i--)
    {
        if(i != 0)
        {
            if(i % 4 == 0 || i % 10 == 0)
            {
                printf("%d\t", i);
            }
            if(i % 10 == 0)
            {
                soma = soma + i;
                cont++;
            }
        }
    }
    printf("\n=============================================================================================================\n");

    printf("\n\n\nA soma dos numeros multiplos de 10 eh= %d\n", soma);
    media = (float)soma / cont;
    printf("E sua media eh= %.2f\n", media);

    return 0;
}
