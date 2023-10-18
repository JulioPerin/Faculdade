/*
1) Ler dois valores que representam os limites de um intervalo.
Mostrar os números pares e divisíveis por 3 desse intervalo em
ordem crescente. Por exemplo: informados 2 e 30 como limites,
mostrar: 6, 12, 18, 24, 30. O usuário pode informar os valores
em qualquer ordem.
*/

#include <stdio.h>

int main(void)
{
    int sup, inf, i, aux;
    char opcao;

    do // repetir o programa//
    {
        printf("Informe o limite superior: ");
        scanf("%d", &sup);
        printf("Informe o limite inferior: ");
        scanf("%d", &inf);

        if(inf > sup)
        {
            aux = sup;
            sup = inf;
            inf = aux;
        }

       printf("Divisiveis por 2 e por 3= ");
        for(i=inf; i<=sup; i++)
        {
            if(i%2 == 0 && i%3 == 0)
            {
                printf(" %d  ", i);
            }
        }

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

        }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

