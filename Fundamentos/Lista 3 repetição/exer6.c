/*
6) Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e forneça a média dos pares.
*/

#include <stdio.h>

int main(void)
{
    int i, cont, cont2;
    float media;
    char opcao;

    do // repetir o programa//
    {
        cont=0;
        cont2=0;

    for(i=0; i<=100; i=i + 2)
    {
        cont = cont + i;
        cont2++;
    }
    media = (float)cont / cont2;
    printf("\nA media dos pares eh= %.2f", media);



        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

}
