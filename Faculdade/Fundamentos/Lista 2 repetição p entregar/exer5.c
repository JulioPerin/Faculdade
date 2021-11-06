/*
5) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar para não fazer divisão por zero no cálculo da média.
*/

#include <math.h>
#include <stdio.h>

int main(void)
{
    int num, contpos, contnegpar, negpar, negdiv3, contnegdiv3, contdiv3, contadordiv3;
    char opcao;
    float media;

    do // repetir o programa//
    {
        contpos=0;
        contnegpar=0;
        contnegdiv3=0;
        contdiv3=0;
        contadordiv3=0;

       do
       {
           printf("Informe um numero inteiro: ");
           scanf("%d", &num);

           if(num > 0)
           {
               contpos++;
           }
           else if(num<0)
           {
               negpar = (int)fabs(num);
               if(negpar%2 == 0);
               {
                   contnegpar++;
               }
           }
           if(num<0 || num%3 == 0)
           {
               contnegdiv3 = (int)fabs(num);
               if(contnegdiv3%3 == 0);
               {
                   contadordiv3 = contnegdiv3 + contadordiv3;
                   contdiv3++;
               }
           }

       }
       while(num != 0);

       media = (float)contadordiv3 / contdiv3;
       printf("\nForam informados %d valores positivos", contpos);
       printf("\nForam informados %d valores negativos e pares", contnegpar);
       printf("\nA media dos valores diviseis por 3 eh: %.2f", media);






        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
        while(opcao == 's' || opcao == 'S');

    return 0;
}
