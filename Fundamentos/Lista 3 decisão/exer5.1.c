/* A figura a seguir apresenta um exemplo fict�cio de �rvore de decis�o,
tomando atributos de clientes de uma institui��o financeira. Elabore um
 programa que implemente essa �rvore de decis�o. As entradas podem ser
 do tipo char, portanto, considere a primeira letra de cada palavra como
entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis,
apresente a mensagem "Caractere inv�lido". */

#include <stdio.h>

int main(void)
{
    char resp, resp2;

    printf("\nResponda com S para sim e N para nao\n");
    printf("O cliente tem saldo em conta corrente? ");
    scanf("%c", &resp);

     if(resp == 's' || resp == 'S')
    {
        printf("\nCliente sem risco");
    }
    else if(resp == 'n' || resp == 'N')
    {
        printf("\nO cliente tem esse dinheiro aplicado?\n");
        setbuf(stdin, NULL);
        scanf("%c", &resp2);

        if(resp == 's' || resp == 'S')
    {
        printf("\nCliente com risco\n");
    }
        else if(resp == 'n' || resp == 'N')
    {
        printf("\nCliente sem risco\n");
    }
    }

    else
    {
       printf("\nInvalido\n");
    }
    return 0;
}

