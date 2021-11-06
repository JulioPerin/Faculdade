/* Ler dois valores numéricos e apresentar a diferença entre eles.
 A diferença sempre é positiva, portanto, o menor é subtraído do
  maior não importando a ordem em que os números são informados */

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
