/*
4) Elaborar um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
a) A soma dos 10 primeiros números.
b) A soma do 11º número até o 20º número.
c) A soma do 21º número até o 30º número.
d) A soma de todos os números.
*/

#include <stdio.h>

int main(void)
{
    int i, soma1, soma2, soma3, soma, num, cont=0;
    char opcao;

    do // repetir o programa//
    {
        soma1=0;
        soma2=0;
        soma3=0;
        soma=0;

    for(1=0; i<=30; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        if(i >= 1 && i <= 10)
        {
            cont++;
            soma1 = soma1 + num; //é num que soma
        }
        if(i >= 11 && i <= 20)
        {
            soma2 = soma2 + num; //é num que soma
        }
        if(i >= 21 && i <= 30)
        {
            soma3 = soma3 + num; //é num que soma
        }
    }
       printf("\nA soma dos 10 primeiros numeros= %d", soma1);
       printf("\nA soma do 11 numero ate o 20 numero= %d", soma2);
       printf("\nA soma do 21 numero ate o 30 numero= %d", soma3);
       printf("\nA soma de todos os numeros= %d", soma);



        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

