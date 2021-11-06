/* Escreva um programa para ler o número de votos brancos,
 nulos (incluem eleitores ausentes) e válidos de uma eleição.
Calcular e mostrar o percentual que cada um (brancos, nulos e válidos)
representa em relação ao total de eleitores. Lembrar que os valores dos
percentuais podem não ser inteiros. */

#include <stdio.h>

int main(void)
{
    float valido, branco, nulo;

    printf("Informe o numero de votos validos: ");
    scanf("%f", &valido);
    printf("Informe o numero de votos em branco: ");
    scanf("%f", &branco);
    printf("Informe o numero de votos nulos: ");
    scanf("%f", &nulo);

    printf("\nPorcentagem total de votos validos: %.1f%%", ((100 * valido) / (valido + branco + nulo)));
    printf("\nPorcentagem total de votos validos: %.1f%%", ((100 * branco) / (valido + branco + nulo)));
    printf("\nPorcentagem total de votos validos: %.1f%%", ((100 * nulo) / (valido + branco + nulo)));

    return 0;
}
