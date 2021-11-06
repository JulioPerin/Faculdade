/*
5) O que faz o algoritmo a seguir?
declare valor, maior como inteiro
leia valor
maior ← valor
para j = 0 até j < 4 passo 1
leia valor
se valor > maior então
maior ← valor
fim-se
fim-para
escreva maior
Implemente o algoritmo utilizando a linguagem C.
*/

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int valor, maior=0, j; //inicializa maior com 0

    for(j = 0; j < 4; j++)
    {

        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(valor > maior)
        {

            maior = valor;
        }

    }
    printf("Numero maior: %d", maior);

    return 0;
}
