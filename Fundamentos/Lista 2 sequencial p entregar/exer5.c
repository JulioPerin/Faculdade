/* 5) Um hotel deseja fazer uma promoção especial de final de semana,
concedendo um desconto de 25% na diária. Sendo informados o número de apartamentos
do hotel e o valor da diária por apartamento para o final de semana completo */

#include <stdio.h>

int main(void)
{
    float diaria, apartamentos;

    printf("Informe o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Informe o numero de apartamentos: ");
    scanf("%f", &apartamentos);

    printf("\nValor promocional da diaria= R$%.2f", diaria - (diaria * 0.25));
    printf("\nTotal arrecadado com 100%% da ocupacao= R$%.2f", (diaria - (diaria * 0.25)) * (apartamentos * 2));
    printf("\nTotal arrecadado com 70%% da ocupacao= R$%.2f", (diaria - diaria * 0.25) * ((apartamentos * 0.7) * 2));
    printf("\nValor que deixarao de arrecadar devido ao desconto= R$%.2f", (diaria * (apartamentos * 2)) - ((diaria - (diaria * 0.25)) * (apartamentos * 2)));

    return 0;
}
