/*
Escreva uma fun��o recursiva para determinar quantas vezes um determinado d�gito X ocorre em um n�mero N.
Por exemplo, o d�gito 3 ocorre 4 vezes em 3304353.

Input Format:
Na primeira linha, devem ser lidos dois n�meros inteiros: o primeiro deve ser o d�gito a ser
procurado e o segundo deve ser o n�mero natural onde o d�gito � procurado.

Output Format:
Imprimir a quantidade de vezes que o d�gito procurado ocorre.
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
