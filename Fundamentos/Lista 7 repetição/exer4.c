/*
4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta aplicação
e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.: A cada 12 meses
o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para que seja positivo. Validar
o percentual de rendimento para que seja um número entre 0 e 1. Validar o período para que seja um valor positivo.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    float valor, rend;
    int mes, i;

    do//repetir programa
    {

        do
        {
            printf("Informe o valor da aplicacao: ");
            scanf("%f", &valor);
        }while(valor<=0);

        do
        {
            printf("Informe a %% de rendimento (entre 0 e 1): ");
            scanf("%f", &rend);
        }while(rend<=0 || rend>=1);

        do
        {
            printf("Informe o periodo(em meses): ");
            scanf("%d", &mes);
        }while(mes<=0);

        printf("MES                 %% DE RENDIMENTO                     VALOR APLICACAO");

        i=1;
        do
        {
            if(i%12 == 0)
            {
                rend = rend + 0.25;
            }


                valor = (valor * rend) + valor;
                printf("\n%d\t                      %.2f\t                        %.2f\t ", i, rend, valor);
                i++;




        }while(i <= mes);









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
