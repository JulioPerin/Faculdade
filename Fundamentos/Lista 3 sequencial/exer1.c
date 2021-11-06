/*  Ler um número double. Separar a parte inteira
e a parte decimal desse número. Apresentar a parte
decimal como um valor double e como um inteiro de
três dígitos. Da parte inteira separar o número
que representa unidade, dezena e centena e mostrar. */

#include <stdio.h>

int main(void)
{
    double num1, partDec;
    int partInt, partDecInt, cent, dez, uni;

    printf("INforme um numero: ");
    scanf("%lf", &num1);

    printf("\nNumero inteiro: %lf", num1);

    partInt = (int)num1;
    printf("\nParte inteira: %d", partInt);

    partDec = num1 - partInt;
    printf("\nParte decimal: %lf", partDec);

    partDecInt = partDec * 1000;
    printf("\nNumero decimal como inteiro: %d", partDecInt);

    cent = partInt / 100;
    printf("\nCentena: %d", cent);

    dez = (partInt % 100) / 10;
    printf("\nDezena: %d", dez);

    uni = partInt % 10;
    printf("\nUnidade: %d", uni);

    return 0;












}
