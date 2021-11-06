/* Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1.
 Escreva um programa para ler o valor de uma compra e o valor fornecido pelo
  usuário para pagar essa compra, e calcule o troco. Calcular e mostrar a
  quantidade de cada tipo de cédula que o caixa deve fornecer como troco.
  Mostrar também o valor da compra e do troco. Use variáveis do tipo int. */

  #include <stdio.h>

  int main(void)
  {
      float compra, pago, troco, n100, n10, n1;


      printf("Informe o valor da compra: ");
      scanf("%f", &compra);
      printf("Informe o valor pago: ");
      scanf("%f", &pago);

      troco = pago - compra;
      printf("\nO troco eh de= R$%.2f", troco);

      n100 = troco / 100;
      n10 = ((int)troco % 100) / 10;
      n1 = (int)troco % 10;

      printf("\n%.0f notas de R$100,00", n100);
      printf("\n%.0f notas de R$10,00", n10);
      printf("\n%.0f notas de R$1,00", n1);

      return 0;
  }
