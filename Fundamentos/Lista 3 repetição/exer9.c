/*
9) Leia dois valores que representam os limites de um intervalo.
O usuário pode informar os valores em ordem crescente ou decrescente.
Para os limites do intervalo validar para que:
1) O programa não aceite valores iguais, ou seja, que o limite inferior seja igual ao superior e vice-versa;
2) Em cada limite não seja informado valor menor ou igual a zero.
Apresente os valores separados por tabulação. Faça a média dos valores que são divisíveis por 11 e por 7, desse intervalo.
*/

#include <stdio.h>

int main(void)
{
    int sup, inf, aux, cont, cont2, i;
    float media;
    char opcao;

    do // repetir o programa//
    {
        sup=1;
        inf=1;
        cont=0;
        cont2=0;


        do
        {
            printf("Informe um valor para o limite superior: ");
            scanf("%d", &sup);
            printf("Informe um valor para o limite inferior: ");
            scanf("%d", &inf);

            if(sup == inf || sup <= 0 || inf <= 0)
            {
                printf("Valor invalido\n");
            }

        }while(sup == inf || sup <= 0 || inf <= 0);

        if(inf > sup)
        {
            aux = inf;
            inf = sup;
            sup = aux;

        }
        for(i=inf; i<=sup; i++)
        {
            printf("%d\t", i);

            if(i%11 == 0 && i%7 == 0)
            {
                cont = cont + i;
                cont2++;
            }
        }

        if(cont2>0)//validação
        {
            media = (float)cont / cont2;
            printf("\nMedia dos valores que sao divisíveis por 11 e por 7 %.2f", media);
        }

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }while(opcao == 's' || opcao == 'S');


    return 0;
}
