/*4) Ler um n�mero double:
a) Se o n�mero lido � menor que 100, separar a
 parte inteira e a parte decimal e mostr�-las separadamente.
b) Se o n�mero lido � maior ou igual a 100,
 obter o resto da divis�o desse n�mero por 3 e mostrar o resto. */

 #include <stdio.h>

 int main(void)
 {
     double num, dec;
     int resto;

     printf("Informe um numero: ");
     scanf("%lf", &num);

     if(num < 100)
     {
      dec = num - (int)num;
      printf("Parte inteira=%.0lf", num);
      printf("\nParte decimal=%lf", dec);
     }
     if(num >= 100)
     {
         resto = (int)num % 3;
         printf("O resto eh=%d", resto);
     }
     return 0;
 }
