/* Ler dois valores num�ricos e apresentar a diferen�a entre eles.
 A diferen�a sempre � positiva, portanto, o menor � subtra�do do
  maior n�o importando a ordem em que os n�meros s�o informados */

  #include <stdio.h>

  int main(void)
  {
      float num1, num2;

      printf("Informe o primeiro numero: ");
      scanf("%f", &num1);
      printf("Informe o segundo numero: ");
      scanf("%f", &num2);

      if(num1 > num2)
      {
          printf("A diferenca eh:%.1f", num1 - num2);
      }
      if(num2 > num1)
      {
          printf("A diferenca eh:%.1f", num2 - num1);
      }
      return 0;
  }
