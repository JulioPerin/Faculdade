/*
6) Fazer um programa que solicite ao usu�rio informar um n�mero compreendido entre 10 e 20.
 Validar essa entrada. Mostrar os n�meros compreendidos entre o valor �x� (informado pelo usu�rio) e �x+6�, inclusive. Para cada n�mero gerado, mostrar os n�meros pares de 2 at� o n�mero gerado, calcular a soma dos pares e mostrar a soma.
*/
#include <stdio.h>

int main(void)
{
    int num, i, somadiv, j;
    char opcao;

    do//repetir o programa
    {
        do
        {
            printf("Informe um numero entre 10 e 20: ");
            scanf("%d", &num);

            if(num<10 || num >20)
            {
                printf("Valor invalido\n");
            }
        }
        while(num<10 || num >20);

        for(i=1; i<=6; i++)
        {
            somadiv=0;

            printf("%d ==> ", num);

            for(j=1; j<=num; j++)
            {
                if(num%j == 0)
                {
                    printf("%d  ", j);
                    somadiv = somadiv + j;
                }
            }
            printf("<-- soma = %d\n", somadiv);
            num++;
        }

            printf("\nDeseja repetir a execucao do programa (S/s)? ");
            setbuf(stdin, NULL);
            scanf("%c", &opcao);
        }while(opcao == 'S' || opcao == 's');

        return 0;
    }
