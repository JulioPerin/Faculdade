/* Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte inteira do número.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro. */

#include <stdio.h>

int main(void)
{
    float num1, num2;
    int res1, res2;

    printf("Insira um numero float: ");
    scanf("%f", &num1);
    printf("Insira outro numero float: ");
    scanf("%f", &num2);

    res1 = (int)num1 / (int)num2;
    printf("\nResultado inteiro: %d", res1);

    res2 = (int)num1 + (int)num2 + 1;
    printf("\nResultado arredondado: %d", res2);


    return 0;


}
