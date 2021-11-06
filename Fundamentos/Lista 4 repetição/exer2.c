/*
2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão necessários para que o capital investido ultrapasse R$ 1200,00.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    float din;
    int cont;

    do//repetir programa
    {
        din=1000;
        cont=0;
        do
        {
            din = (din * 0.05) + din;
            cont++;

        }while(din<1200);

        printf("Serao necessarios %d meses para ultrapassar R$ 1200,00", cont);
        printf("\nValor final: %.2f", din);




        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}

