/*
1) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano,
enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros por ano.
Construa um programa que calcule e imprima quantos anos ser�o necess�rios
para que a �rvore B seja maior que a �rvore A.
*/

#include <stdio.h>

int main(void)
{
    float AA = 1.5, AB = 1.1;
    int anos=0;

    while(AB < AA)
    {
        AA = AA + 0.02;
        AB = AB + 0.03;
        anos++;
    }
    printf("\nAltura final arvore A= %.2f\n", AA);
    printf("\nAltura final arvore B= %.2f\n", AB);
    printf("\nSe passaram: %d anos\n", anos);

    return 0;

}
