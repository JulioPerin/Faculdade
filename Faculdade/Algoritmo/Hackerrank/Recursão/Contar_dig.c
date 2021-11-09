/*
Escreva uma função recursiva para determinar quantas vezes um determinado dígito X ocorre em um número N.
Por exemplo, o dígito 3 ocorre 4 vezes em 3304353.

Input Format:
Na primeira linha, devem ser lidos dois números inteiros: o primeiro deve ser o dígito a ser
procurado e o segundo deve ser o número natural onde o dígito é procurado.

Output Format:
Imprimir a quantidade de vezes que o dígito procurado ocorre.
*/

#include <stdio.h>

int conta_digitos(int n, int num){
    if((n<0) || (n>9))
        return 0;
    else if ((num >= 0) && (num <= 9))
        return (num == n);
    else
        return ((num % 10) == n) + conta_digitos(n, num / 10);
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", conta_digitos(a, b));
}
