//calcular salario liquido
#include <stdio.h>

int main(void)
{
    float salario, inss, ir, total;

    printf("Informe o salario bruto: ");
    scanf("%f", &salario);
    printf("Informe o percentual de inss: ");
    scanf("%f", &inss);
    printf("Informe o percentual de ir: ");
    scanf("%f", &ir);

    total= salario - (salario * inss / 100) - (salario * ir / 100);

    printf("Salario liquido = %f", total);

    return 0;
}
