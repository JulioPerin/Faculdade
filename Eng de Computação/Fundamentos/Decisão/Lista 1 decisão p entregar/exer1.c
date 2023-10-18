/* Ler um número inteiro e calcular e apresentar o seu módulo ou
 valor absoluto (número sem sinal), isto é, se o número é negativo
  apresentá-lo como positivo */

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
