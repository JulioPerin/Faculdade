/* Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não. */

#include <stdio.h>

int main(void)
{

    double data;
    double dia1, mes1, ano1;
    int ano, mes, dia;

    printf("\n==Responda em  ddmmaaaa==\n");
    printf("==Ex: 28052002 -> 28/05/2002\n==");
    printf("Informe a data:");
    scanf("%lf", &data);

    ano1 = data / 10000;
    ano = (ano1 - (int)ano1) * 10000;

    mes1 = data / 1000000;
    mes = (mes1 - (int)mes1) * 100;

    dia1 = data / 1000000;
    dia = (int)dia1;

    if(dia <= 31 && dia > 0)
    {
        if(mes <= 12 && mes > 0)
        {
           if(mes == 2)
           {
               if(dia <= 28)
               {
                   printf("\nData valida\n");
               }
               else
               {
                   printf("\nData Invalida\n");
               }
           }
           else if(mes == 4)
           {
                if(dia <= 30)
               {
                   printf("\nData valida\n");
               }
               else
               {
                   printf("\nData Invalida\n");
               }
           }
            else if(mes == 6)
           {
                if(dia <= 30)
               {
                   printf("\nData valida\n");
               }
               else
               {
                   printf("\nData Invalida\n");
               }
            }
                else if(mes == 9)
                {
                if(dia <= 30)
               {
                   printf("\nData Invalida\n");
               }
               else
               {
                   printf("\nData Invalida\n");
               }
                }
                else if(mes == 10)
                {
                if(dia <= 30)
               {
                   printf("\nData valida\n");
               }
               else
               {
                   printf("\nData Invalida\n");
               }
                }
                else
                {
                   printf("\nData valida\n");
                }
            }

        else
        {
            printf("\nData valida\n");
        }
        }
        else
        {
            printf("\nData invalida\n");
        }
    return 0;
    }
