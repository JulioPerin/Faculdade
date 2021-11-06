/*
1) Use a biblioteca "fatorial.h" (criada no Exercício 3 da Lista 1) para:
a) Calcular e mostrar o fatorial de um número informado pelo usuário.
b) Calcular e mostrar o fatorial dos números de 1 a 12.
*/

#include <stdio.h>
#include "fatorial.h"

int main(void)
{
    char opcao;
    int num;

    do//repetir programa
    {
        mostrasfatorial();
        fatorial();

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
