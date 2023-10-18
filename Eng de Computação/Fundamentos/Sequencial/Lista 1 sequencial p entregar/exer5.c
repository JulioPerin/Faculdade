//CAlcular diversas contar

#include <stdio.h>

 int main(void)
 {
     int valor1, valor2;
     float resto;


     printf("Insira o primeiro valor: ");
     scanf("%d", &valor1);
     printf("Insira o segundo valor: ");
     scanf("%d", &valor2);

     printf("\n%d + %d = %d", valor1, valor2, (valor1 + valor2));
     printf("\n%d - %d = %d", valor1, valor2, (valor1 - valor2));
     printf("\n%d x %d = %d", valor1, valor2, (valor1 * valor2));
     printf("\n%d / %d = %d", valor1, valor2, (valor1 / valor2));
     printf("\n%d / %d = %f", valor1, valor2, (float)valor1 / valor2);
     resto = valor1 % valor2;
     printf("\nResto de %d / %d = %f", valor1, valor2,resto);


     return 0;
 }
