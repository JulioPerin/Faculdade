/* Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu signo */

#include <stdio.h>

int main(void)
{
    int dia, mes;


    printf("Insira seu dia de nascimento: ");
    scanf("%d", &dia);
    printf("Insira seu mes de nascimento (usando numeros): ");
    scanf("%d", &mes);

    switch ( mes )
    {
                case 1 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nCapricornio\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nAquario\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 2 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\Aquario\n");
          }
                    else if(dia > 20 && dia <= 28)
          {
                    printf("\Peixes\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 3 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nPeixes\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nAries\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;
                    case 4 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nArieso\n");
          }
                    else if(dia > 20 && dia <= 30)
          {
                    printf("\nTouro\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 5 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nTouro\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nGemeos\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 6 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nGemeos\n");
          }
                    else if(dia > 20 && dia <= 30)
          {
                    printf("\nCancer\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 7 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nCancer\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nLeao\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 8 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nLeao\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nVirgem\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 9 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nVirgem\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nLibra\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 10 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nLibra\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nEscorpiao\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;
                case 11 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nEscorpiao\n");
          }
                    else if(dia > 20 && dia <= 30)
          {
                    printf("\nSagitario\n");
          }
                    else
          {
                    printf("\nData invalida\n");
          }
          break;

                case 12 :

                    if(dia <=20 && dia > 0)
          {
                    printf("\nSagitario\n");
          }
                    else if(dia > 20 && dia <= 31)
          {
                    printf("\nCapricornio\n");
          }
                    else
          {
                    printf("Data invalida");
          }
          break;

          default:

              printf("\nData invalida\n");

          break;
}
    return 0;
}

