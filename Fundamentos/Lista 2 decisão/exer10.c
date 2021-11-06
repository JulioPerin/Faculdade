/* 10) Fa�a um programa que solicite ao usu�rio o valor do sal�rio de um funcion�rio
 e apresente o menu a seguir e permita ao usu�rio escolher a op��o desejada e mostre
  o resultado. Verifique a possibilidade de op��o inv�lida e n�o se preocupe com restri��es
  , como sal�rio negativo. Use switch - case, if e if - else para a solu��o. */

  #include <stdio.h>

  int main(void)
  {
   int valor;
   float sal;

   printf("Informe o seu salario: ");
   scanf("%f", &sal);
    printf("Escolhe uma das opcoes abaixo:");
    printf("\n1 - Imposto");
    printf("\n2 - Salario");
    printf("\n3 - Classificacao");
    printf("\nInforme a opcao desejada: ");
    scanf("%d", &valor);

    switch ( valor )
    {
        case 1 :

            if(sal < 1000)
            {
            printf("\nO valor do imposto eh= R$%.2f\n", sal * 0.05);
            }

            else if(sal >= 1000 || sal <= 1500)
            {
            printf("\nO valor do imposto eh= R$%.2f\n", sal * 0.1);
            }

            else if(sal > 1500)
            {
            printf("\nO valor do imposto eh= R$%.2f\n", sal * 0.15);
            }
        break;

        case 2 :

            if(sal < 1000)
            {
            printf("\nO valor de aumento eh= R$75.00");
            printf("vO salario total fica= R$%.2f", sal + 75);
            }

            else if(sal >= 1000 || sal <= 1500)
            {
            printf("\nO valor de aumento eh= R$100.00");
            printf("\nO salario total fica= R$%.2f", sal + 100);
            }

            else if(sal > 1500)
            {
            printf("\nO valor de aumento eh= R$75.00");
            printf("\nO salario total fica= R$%.2f", sal + 150);
            }
        break;

        case 3 :
            if(sal < 1000)
            {
            printf("\nCategoria A\n");
            }

            else if(sal >= 1000)
            {
            printf("\nCategoria B\n");
            }
        break;

    }
    return 0;
  }
