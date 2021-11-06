/*
O que faz o algoritmo a seguir?
declare i como inteiro
repetir i = 0 até i < 10 passo 2
escreva “o valor i = “, i
fim-repetir
Implemente o algoritmo utilizando a linguagem C.
*/

#include <stdio.h>

int main(void)
{
    int i;

    printf("o valor de i:");

    for(i=0; i<10; i=i+2)
    {
        printf("\n%d", i);
    }


    return 0;
}
