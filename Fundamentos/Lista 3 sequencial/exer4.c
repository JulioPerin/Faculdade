/*4) Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos.
Exemplo: */

#include <stdio.h>

int main(void)
{
    double num1;
    int cent, dez, uni, result;


    printf("Informe um numero inteiro de ate 3 digitos: ");
    scanf("%lf", &num1);

    result = (int)num1;
    cent = result / 100;
    dez = (result % 100) / 10;
    uni = result % 10;

    printf("%.0lf = %.0d + %.0d + %.0d = %.0d", num1, cent, dez, uni, cent + dez + uni);

    return 0;

}
