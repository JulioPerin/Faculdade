/* Ler um n�mero inteiro e calcular e apresentar o seu m�dulo ou
 valor absoluto (n�mero sem sinal), isto �, se o n�mero � negativo
  apresent�-lo como positivo */

  #include <stdio.h>

  int main(void)
  {
      float num;

      printf("Informe um numero: ");
      scanf("%f", &num);

      if(num < 0)
      {
            printf("seu modulo eh=%.0f", num * -1);
      }
      else
      {
          printf("Seu modulo eh=%.0f", num);
      }
 return 0;

  }
