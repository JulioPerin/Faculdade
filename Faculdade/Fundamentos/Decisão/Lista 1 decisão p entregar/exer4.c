/*4) Ler um número double:
a) Se o número lido é menor que 100, separar a
 parte inteira e a parte decimal e mostrá-las separadamente.
b) Se o número lido é maior ou igual a 100,
 obter o resto da divisão desse número por 3 e mostrar o resto. */

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
