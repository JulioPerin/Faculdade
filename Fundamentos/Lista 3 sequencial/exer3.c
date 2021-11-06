/* Leia um valor double que representa o troco a ser fornecido por um caixa.
 Separe a parte inteira (reais) da parte decimal (centavos) e
  apresente na forma: 123 reais e 18 centavos */

  #include <stdio.h>

  int main(void)
  {
      double num1;
      float partint, partdec;

      printf("Informe o valor do troco: ");
      scanf("%lf", &num1);

      partint = (int)num1;
      partdec = (num1 - (int)num1) * 100;

      printf("O troco informado eh de= %.0f reais e %.0f centavos", partint, partdec);

      return 0;



  }
