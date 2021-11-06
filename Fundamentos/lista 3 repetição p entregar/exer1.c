/*
1) Ler um número e ler um dígito. Contar quantos dígitos o número possui. Exemplo:
É informado 5 como dígito:
55
possui 2 dígitos cinco;
10
possui nenhum dígito cinco;
1550
possui dois dígitos cinco;
50050
possui dois dígitos cinco.
Repetir o
programa enquanto informados valores positivos.
*/

#include <stdio.h>

int main(void)
{

    char opcao;
    int dig, num, cont, aux;

    do // repetir o programa//
    {
        do
        {
            printf("\nInforme um digito: ");
            scanf("%d", &dig);
            if(dig < 0)
            {
                printf("\nValor invalido");
            }
        }
        while(dig < 0);

        do
        {
            printf("Informe um numero: ");
            scanf("%d", &num);

            if(num>0)
            {
                cont=0;
                aux = num;

                while(aux != 0)
                {
                    if(aux%10 == dig)
                    {
                        cont++;
                    }

                    aux = aux/10;
                }

                printf("O numero %d tem %d digitos iguais a %d\n", num, cont, dig);
            }
        }
        while(num>0);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
