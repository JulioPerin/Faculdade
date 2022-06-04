/*
Crie uma struct para representar um numero racional, ou
seja, nessa estrutura deve haver os seguintes campos:
numerador e denominador.
Em seguida, crie uma funcao que receba dois numeros
racionais. A funcao devera retornar um outro numero racional
resultante da divisao dos numeros fornecidos como entrada.

Input Format
A primeira linha e composta pelo numerador e denominador,
respectivamente, do primeiro numero racional.
A segunda linha e composta pelo numerador e denominador,
respectivamente, do segundo numero racional.

Constraints
As entradas lidas devem ser armazenadas em variaveis do
tipo de estrutura que voce criou.

Output Format
Numero racional resultante da divisao dos numeros fornecidos
como entrada.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    float x;
    float y;
}racionais;

void calcula(racionais a, racionais b)
{
    racionais c;

    c.x = a.x * b.y;
    c.y = a.y * b.x;

    printf("%.0f %.0f", c.x, c.y);

}

int main()
{
    racionais a;
    scanf("%f", &a.x);
    scanf("%f", &a.y);

    racionais b;
    scanf("%f", &b.x);
    scanf("%f", &b.y);

    calcula(a, b);

    return 0;
}
