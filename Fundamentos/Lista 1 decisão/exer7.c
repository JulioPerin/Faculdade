/* 7) Elaborar um programa que l� dois valores, verifica se o primeiro � m�ltiplo
 do segundo e escreve a mensagem "S�o m�ltiplos" ou "N�o s�o m�ltiplos" dependendo
 da condi��o. Verificar para que n�o seja realizada uma divis�o por zero.
  Nesse caso, informar que n�o � poss�vel realizar uma divis�o por zero. */

  #include <stdio.h>

  int main(void)
 {
     int num1, num2, result;


     printf("\Informe o primeiro numero: ");
     scanf("%d", &num1);
     printf("Informe o segundo numero: ");
     scanf("%d", &num2);

      if(num2 != 0)
     {
         if(num1 % num2 == 0)
         {
             printf("\nSao multiplos\n");
         }
         else
         {
            printf("\nNao sao multiplos\n");
         }

     }
     else
     {
        printf("Nao eh possivel realizar divisao por 0");
     }

     return 0;
 }
