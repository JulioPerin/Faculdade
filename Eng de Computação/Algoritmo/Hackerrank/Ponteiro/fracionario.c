/*
Implemente uma funcao que receba tres variaveis: duas do tipo float e uma do tipo int.
A funcao devera retornar a parte inteira (int) e a fracionaria (float) de um numero do
real. Para isso utilize o seguinte prototipo:

void frac(float n, int * in, float * fr)

Input Format
A primeira linha da entrada contem um unico inteiro N, indicando o numero de
casos de teste.

Constraints
Os floats devem ser impressos considerando 3 casas decimais, ou seja, usando ".3f"

Output Format
Para cada caso de teste de entrada devera ser apresentada uma linha de saida, no seguinte
formato: N=n I=in F=fr
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void frac(float n, int * in, float * fr)
{
    printf("N=%.3f I=%d F=%.3f\n", n, *in, *fr);
}

int main() {

    int b, num, i;
    float a, c;

    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        scanf("%f", &a);

        b = (int)a;
        c =  a - ((int) a);
        frac(a, &b, &c);
    }





    return 0;
}
