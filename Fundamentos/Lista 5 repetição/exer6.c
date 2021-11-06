/*
6) (Desafio) Implemente um algoritmo que lê números informados pelo usuário.
O algoritmo deve parar quando informado um número negativo. Para cada número lido
, exceto o número negativo que representa a saída, o algoritmo deve imprimir a quantidade
de dígitos do número informado.
*/

#include <stdio.h>

int main(void)
{
    int contDigit=0, num=1, aux;



    while(num >= 0)
    {
       printf("Informe um numero: ");
       scanf("%d", &num);
       aux = num;

       if(num >= 0)
       {
          contDigit=0;

          while(num != 0)
          {
              contDigit++;
              num = num / 10;
          }
          printf("O numero %d tem %d digitos\n", aux, contDigit);

       }
    }


    return 0;
}
