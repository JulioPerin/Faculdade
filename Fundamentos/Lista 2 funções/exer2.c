/*
2) Criar fun��o para:
a) Receber, por par�metro, um n�mero inteiro e positivo e retornar a quantidade de divisores que esse n�mero possui.
b) Mostrar os divisores de um n�mero. Essa fun��o recebe como par�metro o n�mero e mostra os divisores de 1 at� o n�mero passado como par�metro da fun��o.
c) Receber, por par�metro, um n�mero positivo e retornar a soma dos divisores que esse n�mero possui.
d) Receber, por par�metro, dois n�meros e retornar o M�ximo Divisor Comum dos dois n�meros.
Salvar todas as fun��es dentro de uma biblioteca chamada divisores.h.
*/

#include <stdio.h>
#include "divisores.h"

int main(void)
{
    char opcao;
    int op, num, num2;

    do//repetir programa
    {
        printf("1 - Quantidade de divisores de um numero\n2 - Divisores de um numero\n3 - Divisores, quantidade e soma de um intervalo\n4 - Maximo Divisor Comum de dois numeros");
        printf("\nEscolha uma das opcoes: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            do
            {
                printf("Informe um valor: ");
                scanf("%d", &num);
            }while(num<=0);

            printf("O numero de divisores eh: %d", divisores1(num));
            break;

        case 2:
            do
            {
                printf("Informe um valor: ");
                scanf("%d", &num);
            }while(num<=0);

            divisores2(num);

            break;

        case 3:
            do
            {
                printf("Informe um valor: ");
                scanf("%d", &num);
            }while(num<=0);

            somadiv(num);
            break;


        case 4:
            do
            {
                printf("Informe um valor: ");
                scanf("%d", &num);
            }while(num<=0);
            do
            {
                printf("Informe um valor: ");
                scanf("%d", &num2);
            }while(num2<=0);

            mdc(num, num2);
            break;

        default:
            printf("Valor invalido");
            break;
        }


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
