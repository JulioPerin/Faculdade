/*
4) Ler dois n�meros que representam, respectivamente, o limite inferior e
superior de um intervalo. Validar para que o limite superior seja maior
que o limite inferior. Em rela��o a esse intervalo:
a) Mostrar os n�meros pares em colunas (n n�meros por linha, separado
 por tabula��o). n � um valor informado pelo usu�rio e deve ser validado
 para se obter uma entrada maior que zero.
b) Calcular e mostrar a m�dia dos n�meros �mpares. Validar para que n�o
seja realizada uma divis�o por zero. Aten��o: Antes de fazer a soma dos
n�meros, converter os negativos para positivos (sem fazer uso da fun��o
fabs()).
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int sup, inf, i, neg, soma, contdiv3, linha, contlinha;
    float media;

    do//repetir programa
    {

            printf("Informe o valor inferior: ");
            scanf("%d", &inf);

            do
            {
                printf("Informe o valor superior: ");
                scanf("%d", &sup);
            }while(sup<=inf);

            printf("Informe a quantidade de numeros por linha: ");
            scanf("%d", &linha);

            soma=0;
            contdiv3=0;
            contlinha=0;

            for(i=inf; i<=sup; i++)
            {

                if(i<0)
                {
                   neg = i * -1;
                }

                if(neg % 2 == 0 || i % 2 == 0)
                {
                    printf(" %d\t ", i);
                    contlinha++;
                    if(contlinha%linha == 0)
                    {
                        printf("\n");
                    }



                }
                if(i%2!=0)
                {
                    if(i<0)
                    {
                        soma = soma + (i * -1);
                        contdiv3++;
                    }
                    else if(i>0)
                    {
                        soma = soma + i;
                        contdiv3++;
                    }
                }

            }

            media = (float)soma/contdiv3;
            printf("\nA media dos impares eh: %.2f", media);









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
