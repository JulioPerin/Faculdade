/* 6) Crie um programa que leia dia, mês e ano separadamente e imprima se a data é válida ou não. */

#include <stdio.h>

int main(void)
{
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(dia <= 31 && dia > 0)
    {
        if(mes <= 12 && mes > 0)
        {
           if(mes == 2)
           {
               if(dia <= 28)
               {
                   printf("\n%d/0%d/%d\n", dia, mes, ano);
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
                   printf("\n%d/0%d/%d\n", dia, mes, ano);
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
                   printf("\n%d/0%d/%d\n", dia, mes, ano);
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
                   printf("\n%d/0%d/%d\n", dia, mes, ano);
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
                   printf("\n%d/%d/%d\n", dia, mes, ano);
               }
               else
               {
                   printf("\nData Invalida\n");
               }
                }
                else
                {
                   printf("\n%d/%d/%d\n", dia, mes, ano);
                }
            }

        else
        {
          if(mes <= 9)
        {
             printf("\n%d/0%d/%d\n", dia, mes, ano);
        }
        else
        {
             printf("\n%d/%d/%d\n", dia, mes, ano);
        }
        }
        }
        else
        {
            printf("\nData invalida\n");
        }
    return 0;
    }
