/* Faça um programa que apresente o menu a seguir e permita ao usuario escolher
 a opção desejada, receba os dados necessarios para executar a operação e mostre o resultado. */

#include <stdio.h>

int main(void)
{
    int a, b, c, valor;

    printf("Escolhe uma das opcoes abaixo:");
    printf("\n1 - Mostra os numeros em ordem crescente");
    printf("\n2 - Mostra os numeros em ordem decrescente");
    printf("\n3 - Mostra os numeros que sao multiplos de 2");
    printf("\nInforme a opcao desejada: ");
    scanf("%d", &valor);
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);


    switch ( valor )

    {
        case 1 :
            if(a > b && a > c)
            {
                if(b < a && b > c)
                {
                    printf("\n%d, %d, %d\n", c, b, a);
                }
                if(c < a && c > b)
                {

                    printf("\n%d, %d, %d\n", b, c, a);
                }
            }
            if(b > a && b > c)
            {
                if(a < b && a > c)
                {
                    printf("\n%d, %d, %d\n", c, a, b);
                }
                if(c < b && c > a)
                {
                    printf("\n%d, %d, %d\n", a, c, b);
                }
            }

            if(c > b && c > a)
            {
                if(a < c && a > b)
                {
                    printf("\n%d, %d, %d\n", b, a, c);
                }
                if(b < c && b > a)
                {
                    printf("\n%d, %d, %d\n", a, b, c);
                }
            }
            break;

        case 2 :
            if(a > b && a > c)
            {
                if(b < a && b > c)
                {
                    printf("\n%d, %d, %d\n", a, b, c);
                }
                if(c < a && c > b)
                {

                    printf("\n%d, %d, %d\n", a, c, b);
                }
            }
            if(b > a && b > c)
            {
                if(a < b && a > c)
                {
                    printf("\n%d, %d, %d\n", b, a, c);
                }
                if(c < b && c > a)
                {
                    printf("\n%d, %d, %d\n", b, c, a);
                }
            }

            if(c > b && c > a)
            {
                if(a < c && a > b)
                {
                    printf("\n%d, %d, %d\n", c, a, b);
                }
                if(b < c && b > a)
                {
                    printf("\n%d, %d, %d\n", c, b, a);
                }

            }
            break;

        case 3 :

            printf("====Multiplos de 2====\n");
            if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
            {
                printf("\nTodos sao multiplos de 2");
            }
            else if(a % 2 == 0 && b % 2 == 0)
            {
                printf("\nApenas %.d e %d sao multiplos de 2", a, b);
            }
            else if(a % 2 == 0 && c % 2 == 0)
            {
                printf("\nApenas %.d e %d sao multiplos de 2", a, c);
            }
            else if(b % 2 == 0 && c % 2 == 0)
            {
                printf("\nApenas %.d e %d sao multiplos de 2", b, c);
            }
            else if (a % 2 == 0)
            {
                printf("\nApenas o numero %d eh multiplo de 2", a);
            }
            else if (b % 2 == 0)
            {
                printf("\nApenas o numero %d eh multiplo de 2", b);
            }
            else if (c % 2 == 0)
            {
                printf("\nApenas o numero %d eh multiplo de 2", c);
            }
            else
            {
                printf("\nNenhum numero eh multiplo de 2")
            }
            break;

        default :
            printf ("Opcao invalida!\n");
    }
    return 0;
}
