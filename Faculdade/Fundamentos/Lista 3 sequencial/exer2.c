/* Considerando que para um cons�rcio sabe-se o n�mero total de presta��es,
 a quantidade de presta��es pagas e o valor de cada presta��o (que � fixo).
  Escreva um programa que determine o valor total j� pago pelo consorciado
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
