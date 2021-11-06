/*
3) Ler números informados pelo usuário. Parar a leitura quando informado um número negativo ou 0.
Esse número não deve ser considerado na contagem. Contar e mostrar quantos números divisíveis por
5 e pares foram informados.
*/

#include <stdio.h>

int main(void)
{
    char opcao;

    do//repetir programa
    {










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
