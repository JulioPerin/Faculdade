/* Escreva um programa que leia um número e verifique se ele se encontra
 no intervalo entre 5 e 20. Mostre uma mensagem se o número estiver nesse intervalo. */

 #include <stdio.h>

 int main(void)
 {
     int num;

     printf("Informe um numero");
     scanf("%d", &num);

     if ((num >= 5) && (num <= 20))
     {
         printf("\nO numero esta entre 5 e 20");
     }
     else
     {
         printf("\nO numero nao esta no intervalo");
     }
     return 0;

 }
