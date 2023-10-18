/*
1) Use a biblioteca "fatorial.h" (criada no Exerc�cio 3 da Lista 1) para:
a) Calcular e mostrar o fatorial de um n�mero informado pelo usu�rio.
b) Calcular e mostrar o fatorial dos n�meros de 1 a 12.
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
