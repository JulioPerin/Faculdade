
#include <stdio.h>

int main(void)
{
   float altura, raio, volume;

   printf("Digite a altura do cilindro: ");
   scanf("%f", &altura);
   printf("Digite o raio do cilindro: ");
   scanf("%f", &raio);

   volume= 3.1415 * (raio * 2)* altura;

   printf("\nO volume do cilindro %c: %.4f", 130, volume);

   return 0;
}
