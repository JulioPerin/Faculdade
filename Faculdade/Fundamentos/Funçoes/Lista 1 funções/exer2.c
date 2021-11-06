/*
2) Fazer uma função para verificar se um número é ou não primo.
A função será implementada em um arquivo de cabeçalho "primo.h"
e deverá retornar 0 se o número for primo ou 1, caso o número não
seja primo. Elaborar um programa para usar essa função para
*/

#include <stdio.h>


int primo(int num)
{
    int result, i;

    result=0;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                result++;
                break;
            }
        }
        if(result == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }

}

int primo2(void)
{

    int cont, j, i, contdiv;

        cont=0;
        i=2;
        do
        {
            contdiv=0;


            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0 && i != 1)
            {
                printf(" %d\t ", i);
                cont++;
                if(cont%10 == 0)
                {
                    printf("\n");
                }

            }

            i++;
        }
        while(i <= 100);
}

float primo3(void)
{
    int cont, j, i, contdiv, soma;
    float media;

        cont=0;
        i=100;
        soma=0;
        do
        {
            contdiv=0;


            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0 && i != 1)
            {
                cont++;
                soma = soma + i;
            }

            i++;
        }
        while(i <= 200);
        media = soma / cont;

        printf("A media eh: %.2f", media);
}

int main(void)
{
    char opcao, escolha;
    int num1, result;

    do//repetir programa
    {


        printf("A - Verificar se um numero eh primo\n");
        printf("B - Primos entre 0 e 100\n");
        printf("C - Primos entre 200 e 100\n");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':
                do
                {
                    printf("Informe um numero positivo: ");
                    scanf("%d", &num1);
                }while(num1 <= 0);
                result = primo(num1);

                if(result == 0)
                {
                    printf("%d eh primo\n", num1);
                }
                else
                {
                    printf("%d nao eh primo\n", num1);
                }
                break;

            case 'B':
            case 'b':

                primo2();
                break;

            case 'C':
            case 'c':
                primo3();

                break;

            default :
                printf("\nOpcao invalida\n");
                break;













        }

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
