/*
8) Apresente os n�meros pares entre 100 e 200.
 Contar quantos s�o �mpares e n�o divis�veis
 por 3 nesse intervalo. Fa�a a m�dia dos valores
 pares e divis�veis por 5 do intervalo.
 */

#include <stdio.h>

int main(void)
{
    int i, cont, cont1, soma;
    float media;
    char opcao;

    do // repetir o programa//
    {
        cont=0;
        cont1=0;
        soma=0;

    for(i=100; i<=200; i++)
    {
        if(i%2 != 0 && i%3 !=0)
        {
            cont++;
        }
        else if(i%2 == 0 && i%5 == 0)
        {
            cont1++;
            soma = soma + i;
        }
    }

    printf("\nImpares nao divisiveis por 3: %d\n", cont);
    media = (float)soma/cont1;
    printf("Media dos pares multiplos de 5: %.2f\n", media);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
