/* Ler três valores inteiros diferentes, encontrar
 e mostrar o menor deles. Deve ser criada uma
 variável para armazenar o menor número. */

 #include <stdio.h>

 int main(void)
 {
     float num1, num2, num3, menor;

     printf("Informe o primeiro valor: ");
     scanf("%f", &num1);
     printf("Informe o segundo valor: ");
     scanf("%f", &num2);
     printf("Informe o terceiro valor: ");
     scanf("%f", &num3);

     if(num1 < num2 && num1 < num3)
     {
         menor = num1;
         printf("O menor numero eh:%.0f", menor);
     }
     if(num2 < num1 && num2 < num3)
     {
         menor = num2;
         printf("O menor numero eh:%.0f", menor);
     }
     if(num3 < num2 && num3 < num1)
     {
         menor = num3;
         printf("O menor numero eh:%.0f", menor);
     }
     return 0;
 }
