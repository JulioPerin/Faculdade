/*
6) (Desafio) Implemente um algoritmo que l� n�meros informados pelo usu�rio.
O algoritmo deve parar quando informado um n�mero negativo. Para cada n�mero lido
, exceto o n�mero negativo que representa a sa�da, o algoritmo deve imprimir a quantidade
de d�gitos do n�mero informado.
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
