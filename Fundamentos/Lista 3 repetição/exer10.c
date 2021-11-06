/*
10) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário.
A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc
*/

#include "stdio.h"

int main(void)
{
    long int a, b, aux;
    int i, num;
    char opcao;

    do // repetir o programa//
    {

    a = 0;
    b = 1;

    printf("Informe a quantidade de numeros desejados: ");
    scanf("%d", &num);
    printf("Numeros de Fibonacci:\n");
    printf("1 ");

    for(i = 0; i < num-1; i++)
    {
	    aux = a + b;
	    a = b;
	    b = aux;

	    printf("%llu ", aux);
    }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');
return 0;
}
