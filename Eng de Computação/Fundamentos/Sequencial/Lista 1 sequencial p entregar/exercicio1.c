//Algoritmo que calcula o volume de um quadrilatero
#include <stdio.h>

int main(void)
{
    int altura, largura, comprimento, volume;

    printf("Digite a altura em cm: ");
    scanf("%d", &altura);
    printf("Digite a largura em cm: ");
    scanf("%d", &largura);
    printf("Digite o comprimento em cm: ");
    scanf("%d", &comprimento);

    volume = comprimento * altura * largura;
    printf("O volume %c: %d", 130 , volume);

    return 0;

}
