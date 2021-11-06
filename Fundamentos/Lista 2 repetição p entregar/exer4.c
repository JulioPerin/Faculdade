/*
4) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente. Obter a média dos pares e divisíveis por 3 desse intervalo.
*/

#include <stdio.h>

int main(void)
{
    int i, contpar3, cont;
    char opcao;
    float media;

    do // repetir o programa//
    {
        contpar3=0;
        cont=0;

        printf("\n Valores impares e divisiveis por 7: \n\n");
        for(i=500; i>=0; i--)
        {
           if(i%2 != 0 && i%7 == 0)
           {
               printf("%d\t", i);
           }
           if(i%2 == 0 && i%3 == 0)
           {
               contpar3 = contpar3 + i;
               cont++;
           }
        }
        media = contpar3 / cont;
        printf("\n\n A media dos pares e divisiveis por 3 eh: %.2f\n", media);

        printf("\nDeseja repetir a execucao do programa? (S/s)");s
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
        while(opcao == 's' || opcao == 'S');

    return 0;
}
