//Calculadora de salario liquido em uma empresa de venda de carros
#include <stdio.h>

int main(void)

{
    float salario, comissao, carros, vendas, salarioLiq;

    printf("Digite o valor fixo do salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da comissao: ");
    scanf("%f", &comissao);
    printf("Digite o numero de carros vendidos: ");
    scanf("%f", &carros);
    printf("Digite o valor total de vendas: ");
    scanf("%f", &vendas);

       salarioLiq = salario + (comissao * carros) + (0.05 * vendas);

    printf("\nSalario liquido equivale a: %.2f", salarioLiq);

    return 0;


}
