/* 6) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada.
Para calcular seu rendimento, ela dever� fornecer o valor constante da aplica��o mensal,
 a taxa e o n�mero de meses. Sabendose que a f�rmula usada para este c�lculo �: */

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
