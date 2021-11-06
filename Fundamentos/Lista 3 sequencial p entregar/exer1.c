/* Fazer um programa que leia um valor double que representa o salário de uma pessoa.
 Apresente separadamente os reais (parte inteira) e os centavos (parte decimal). */

 #include <stdio.h>

 int main(void)
 {
     float salario, saldec;
     int salint;

     printf("Informe o seu salario: ");
     scanf("%f", &salario);

     salint = (int)salario;
     saldec = (salario - salint) * 100;

     printf("\nSalario informado= R$%.2f", salario);
     printf("\nReais=%d", salint);
     printf("\nCentavos=%.0f", saldec);

     return 0;
 }
