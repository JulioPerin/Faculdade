/* Escreva um programa que, dados a quantidade de litros de combust�vel utilizada,
 os quil�metros percorridos por um autom�vel e o valor do litro de combust�vel,
 calcule quantos quil�metros o ve�culo percorreu por litro de combust�vel e
 o valor gasto em reais por km. */

   #include <stdio.h>

   int main(void)
   {
       float km, consumido, valor, kmL, precopkm;

       printf("Informe a kilometragem rodada: ");
       scanf("%f", &km);
       printf("Informe o combustivel consumido: ");
       scanf("%f", &consumido);
       printf("Informe o preco por litro do combustivel: ");
       scanf("%f", &valor);

       kmL = km / consumido;
       precopkm = valor / kmL;
       printf("\nO automovel fez: %.2f", kmL);
       printf("\nValor por km: %.2f", precopkm);

       return 0;




   }
