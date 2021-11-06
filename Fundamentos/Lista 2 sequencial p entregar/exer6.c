/* 6) Uma pessoa resolveu fazer uma aplicação em uma poupança programada.
Para calcular seu rendimento, ela deverá fornecer o valor constante da aplicação mensal,
 a taxa e o número de meses. Sabendose que a fórmula usada para este cálculo é: */

 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
     float app, rend, meses, total;

     printf("Informe o valor da aplicacao: ");
     scanf("%f", &app);
     printf("Informe a taxa de rendimento: ");
     scanf("%f", &rend);
     printf("Informe o numero de meses: ");
     scanf("%f", &meses);

     total = app * (pow(1 + rend, meses) -1) / rend;
     printf("O valor acumulado eh= %.2f", total);

     return 0;

 }
