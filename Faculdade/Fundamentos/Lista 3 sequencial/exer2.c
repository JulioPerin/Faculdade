/* Considerando que para um consórcio sabe-se o número total de prestações,
 a quantidade de prestações pagas e o valor de cada prestação (que é fixo).
  Escreva um programa que determine o valor total já pago pelo consorciado
  e o saldo devedor */

  #include <stdio.h>

  int main(void)
  {
      float totalp, ppagas, fixo;

      printf("Informe a quantidade total de prestacoes: ");
      scanf("%f", &totalp);
      printf("Informe a quantidade de prestacoes pagas: ");
      scanf("%f", &ppagas);
      printf("Informe o valor fixo de prestacoes: ");
      scanf("%f", &fixo);

      printf("\nValor total pago= R$%.2f", ppagas * fixo);
      printf("\nValor a ser pago= R$%.2f", (totalp * fixo) - (ppagas * fixo));

      return 0;

  }
