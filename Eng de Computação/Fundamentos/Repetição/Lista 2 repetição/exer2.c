/*
2) Na matem�tica, o fatorial de um n�mero � o produto de
todos os inteiros positivos menores ou iguais ao n�mero.
Exemplo: Fatorial de 5 � 1 * 2 * 3 * 4 * 5 = 120. Elabore
um programa que calcule e mostre o fatorial de um n�mero
informado pelo usu�rio. Validar esse n�mero para que esteja
em um intervalo de 1 a 20. Lembrando que fatorial de 1 = 1 e
fatorial de 0 = 1.
*/

#include <stdio.h>

int main (void)
{
    int  num, i;
    long long int fat;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("%d! = ", num);

    for(i = num; i >= 2; i--)
    {
        fat = fat * i;
        printf("%d * ", i);

    }
    printf("1 = %lld", fat);



}
