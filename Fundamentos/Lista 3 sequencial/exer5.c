/* Fa�a um programa para calcular a quantidade de fita necess�ria, em cent�metros, para amarrar um pacote
com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Ser�o fornecidas a largura, a
altura e o comprimento do pacote. Para amarrar as pontas da fita s�o necess�rios 15 cm de fita em cada
ponta. A figura a seguir ilustra a maneira como a fita � passada pelo pacote.*/

#include <stdio.h>

int main(void)
{
    float  alt, larg, comp;

    printf("Informe a largura da caixa: ");
    scanf("%f", &larg);
    printf("Informe a altura da caixa: ");
    scanf("%f", &alt);
    printf("Informe o comprimento da caixa: ");
    scanf("%f", &comp);

    printf("Sera necessario= %.1f", (4 * alt) + (2 * larg) + (2 * comp) + 30 );

    return 0;
}
