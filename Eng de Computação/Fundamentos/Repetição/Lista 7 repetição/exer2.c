/*
2) Escreva um programa que imprima todas as possibilidades de que no lançamento
de dois dados a soma das faces seja um valor informado pelo usuário. O usuário
deve informar um valor válido entre 2 a 12. Repetir a leitura até que o usuário
informe um valor válido.
*/

#include <stdio.h>

int main(void)
{
    int dado1, dado2, num, cont;
    char opcao;

    do // repetir o programa
    {
        cont=0;
        do
        {
            printf("Informe um positivo de 2 a 12: ");
            scanf("%d", &num);

            if(num < 2 || num > 12)
            {
                printf("Valor invalido\n");
            }
        }
        while(num < 2 || num > 12);

        for(dado1=1; dado1<=6; dado1++)
        {
            for(dado2=1; dado2<=6; dado2++)
            {
                if(dado1 + dado2 == num)
                {
                    printf("%d + %d = %d\n", dado1, dado2, num);
                    cont++;
                }
            }
        }
        printf("numero de possibilidades= %d", cont);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

