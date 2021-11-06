/*Faça um programa que receba o salário de um funcionário
 e o código correspondente ao seu cargo atual e mostre o
  cargo, o valor do aumento e seu novo salário */

  #include <stdio.h>

  int main(void)
  {
      float salario;
      int cargo;

      printf("CODIGO    |    CARGO          |    PERCENTUAL\n  1       |    Escriturario   |    50%%");
      printf("\n  2       |    Secratario     |    35%%\n  3       |    Caixa          |    20%%");
      printf("\n  4       |    Gerente        |    10%%\n  5       |    Diretor        |    0%%");




      printf("\n\nInforme seu salario: \n");
      scanf("%f", &salario);
      printf("\nInforme seu cargo: \n");
      scanf("%d", &cargo);

      switch ( cargo )
      {
        case 1 :

         printf("\nSeu cargo eh = Escriturario\n");
         printf("\nValor do aumento eh de= R$%.2f\n", salario * 0.5);
         printf("\nSeu novo salario eh de= R$%.2f\n", salario + (salario * 0.5));

        break;

        case 2 :

         printf("\nSeu cargo eh = Secretario\n");
         printf("\nValor do aumento eh de= R$%.2f\n", salario * 0.35);
         printf("\nSeu novo salario eh de= R$%.2f\n", salario + (salario * 0.35));

         break;

        case 3 :

         printf("\nSeu cargo eh = Caixa\n");
         printf("\nValor do aumento eh de= R$%.2f\n", salario * 0.2);
         printf("\nSeu novo salario eh de= R$%.2f\n", salario + (salario * 0.2));

         break;

        case 4 :

         printf("\nSeu cargo eh = Gerente\n");
         printf("\nValor do aumento eh de= R$%.2f\n", salario * 0.1);
         printf("\nSeu novo salario eh de= R$%.2f\n", salario + (salario * 0.1));

         break;

        case 5 :

         printf("\nSeu cargo eh = Diretor\n");
         printf("\nNao tem aumentos a serem feitos");

         break;
      }
return 0;
  }
