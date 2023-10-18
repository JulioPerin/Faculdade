#include <stdio.h>

int main(void)
{

    int i=0, n, cont=0;
    char opcao;

    do // repetir o programa//
    {
        i=0;
        cont=0;

    do
         {

         printf("Informe a quantidade de pares que deseja imprimir: ");
         scanf("%d", &n);

            if(n <= 0)
            {
                printf("\nInvalido");
            }
        }
        while(n <= 0);
        do
        {

        printf("%d\t", i);
        cont++;
        i = i+2;

        if(cont % 5 == 0)
        {
            printf("\n");
        }

        }
        while(cont < n);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

        }
     while(opcao == 's' || opcao == 'S');

    return 0;
}
