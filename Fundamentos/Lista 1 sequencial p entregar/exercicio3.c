//calcular o valor das prestações
#include <stdio.h>

int main(void)
{
    float taxa, prestacao, valjuros;

    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);
    printf("Informe o valor dos juros: ");
    scanf("%f", &taxa);

    valjuros = prestacao + (prestacao * (taxa / 100));

    printf("O valor total com juros %c: %f", 130, valjuros);

    return 0;
}
