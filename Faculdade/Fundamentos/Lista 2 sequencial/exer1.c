/* Ler dois n�meros float e apresentar, sem utilizar fun��es matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte inteira do n�mero.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro. */

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
