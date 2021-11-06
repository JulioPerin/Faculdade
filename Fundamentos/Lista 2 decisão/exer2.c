/* Ler três valores inteiros diferentes,
 encontrar e mostrar o número do meio.
  Deve ser criada uma variável para
  armazenar o número do meio. */

  #include <stdio.h>

  int main(void)
  {
     float num1, num2, num3, meio;

     printf("Informe o primeiro valor: ");
     scanf("%f", &num1);
     printf("Informe o segundo valor: ");
     scanf("%f", &num2);
     printf("Informe o terceiro valor: ");
     scanf("%f", &num3);

     if(num1 < num2 && num1 > num3)
     {
         meio = num1;
         printf("O numero do meio eh:%.0f", meio);
     }
     if(num1 < num3 && num1 > num2)
     {
         meio = num1;
         printf("O numero do meio eh:%.0f", meio);
     }
     if(num2 < num1 && num2 > num3)
     {
         meio = num2;
         printf("O numero do meio eh:%.0f", meio);
     }
     if(num2 < num3 && num1 < num2)
     {
         meio = num2;
         printf("O numero do meio eh:%.0f", meio);
     }

     if(num3 < num2 && num3 > num1)
     {
         meio = num3;
         printf("O numero do meio eh:%.0f", meio);
     }
     if(num1 > num3 && num3 < num2)
     {
         meio = num3;
         printf("O numero do meio eh:%.0f", meio);
     }

     return 0;
 }

