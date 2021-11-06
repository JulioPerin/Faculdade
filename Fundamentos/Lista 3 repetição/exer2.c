/*
2) Faça um programa que apresente uma tabela de lucro esperado,
em decorrência do número de pessoas e valor do ingresso. O valor
do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos.
É informada a quantidade de pessoas.
*/

#include <stdio.h>

int main(void)
{
    int num;
    float i, lucro;
    char opcao;

    do // repetir o programa//
    {
        lucro=0;

        printf("informe o numero de pessoas: ");
        scanf("%d", &num);

        printf("VALOR DO INGRESSO         VALOR TOTAL RECEBIDO");

        for(i=15; i<=20; i=i+0.5)
        {
            lucro = i * num;
            printf("\nR$ %.2f                      R$ %.2f", i, lucro);
        }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
