/*Elaborar um programa que leia um valor que se refere à altura
 de uma pessoa e mostre uma mensagem conforme a tabela a seguir.
  Utilizar variável do tipo float. */

  #include <stdio.h>

  int main(void)
  {
      float altura;

      printf("Informe uma altura:");
      scanf("%f", &altura);

      if(altura < 1.50)
      {
          printf("Altura abaixo de um metro e cinquenta centimetros");
      }
      if(((altura >= 1.50) && (altura <= 1.80)))
      {
        printf("Altura entre um metro e cinquenta e um metro e oitenta centimetros");
      }
      if(altura > 1.80)
      {
          printf("Altura acima de um metro e oitenta centimetros");
      }
      return 0;
  }
