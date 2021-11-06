/*
2) Ler dois números que representam os limites de um intervalo. Validar a entrada, o usuário deverá fornecer valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os números primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja realizada uma divisão por zero.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int sup, inf, aux, i, j, contdiv, cont, soma, contdiv3, k;
    float media;

    do//repetir programa
    {
        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d", &inf);
        }while(inf<=0);
        do
        {
            printf("Informe o limite superior: ");
            scanf("%d", &sup);
        }while(sup<=0);

        if(sup<inf)
        {
            aux = sup;
            sup = inf;
            inf = aux;
        }


        i=inf;
        cont=0;
        do
        {
            contdiv=0;


            for(j=inf; j<i; j++)
            {
                if(i%j == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0 && i != 1)
            {
                printf(" %d\t", i);
                cont++;
                if(cont%5 == 0)
                {
                    printf("\n");
                }
            }

            i++;
        }
        while(i <= sup);



        for(k=inf; k<=sup; k++)
        {
            if(k%3 == 0 && k%7 == 0)
            {
                contdiv3++;
                soma = soma + k;
            }
        }

        media = (float)soma / contdiv3;

        printf("A media dos divisiveis por 3 e por 7 eh de %.2f", media);











        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
