/*
Implemente uma função recursiva que calcule o máximo divisor comum entre dois números inteiros:

Input Format:
Na primeira linha devem ser lidos dois números inteiros.

Output Format:
Imprimir o máximo divisor comum entre os dois números.
*/

#include <stdio.h>

int mdc(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else if (a%b == 0)
    {
        return b;
    }
    else
    {
        return mdc(b, a % b);
    }
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", mdc(a, b));
}
