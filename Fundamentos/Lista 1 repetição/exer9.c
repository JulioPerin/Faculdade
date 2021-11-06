/*
9) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor informado para a quantidade deve ser maior que 0. Validar a entrada.
*/

#include <stdio.h>

int main(void)
{

    int i=1, n, cont=0;
    char opcao;

    do // repetir o programa//
    {
        i=1;
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

        printf("%d\n", i);
        cont++;
        i = i+2;

        }
        while(cont < n);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
