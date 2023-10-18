//Calcular o percentual de reajuste
#include <stdio.h> //biblioteca padrão para comandos i/o

int main (void)
{
  float valor1, valor2, valor3;

  printf("Digite o  valor: ");
  scanf("%f", &valor1);
  printf("Digite a porcentagem a ser atribuida: ");
  scanf("%f", &valor2);

  valor3 = valor1 + (valor1 *(valor2 /100));
  printf("\Valor final = %.2f", valor3);

  return 0;


}

