/*Faça um programa que determine a data cronologicamente maior
entre duas datas fornecidas pelo usuário. Cada data deve ser
composta por três valores inteiros, em que o primeiro representa
 o dia, o segundo, o mês e o terceiro, o ano. */

 #include <stdio.h>

int main(void)
{
    int dia, dia1, mes, mes1, ano, ano1;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    printf("Informe outro dia: ");
    scanf("%d", &dia1);
    printf("Informe outro mes: ");
    scanf("%d", &mes1);
    printf("Informe outro ano: ");
    scanf("%d", &ano1);

   if(mes <= 12 && mes1 <= 12 && dia <=31 && dia1 <=31)
   {
        if(ano > ano1)
        {
            printf("\nA maior data eh:%d/%d/%d\n", dia, mes, ano);
        }
        else if(ano1 > ano)
        {
            printf("\nA maior data eh:%d/%d/%d\n", dia1, mes1, ano1);
        }
        else
        {
            if(mes > mes1)
            {
                printf("\nA maior data eh:%d/%d/%d\n", dia, mes, ano);
            }
            else if(mes1 > mes)
            {
               printf("\nA maior data eh:%d/%d/%d\n", dia1, mes1, ano1);
            }
            else
                {
                    if(dia > dia1)
                    {
                        printf("\nA maior data eh:%d/%d/%d\n", dia, mes, ano);
                    }
                    else if(dia1 > dia)
                    {
                        printf("\nA maior data eh:%d/%d/%d\n", dia1, mes1, ano1);
                    }
                    else
                    {
                        printf("\nAs datas sao iguais\n");
                    }
                }
        }
    }
    else
       {
           printf("Valores invalidos");
       }
return 0;
}
