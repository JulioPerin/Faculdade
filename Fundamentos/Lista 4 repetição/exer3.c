/*
3) Ler n�meros informados pelo usu�rio. Parar a leitura quando informado um n�mero negativo ou 0.
Esse n�mero n�o deve ser considerado na contagem. Contar e mostrar quantos n�meros divis�veis por
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
