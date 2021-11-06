/*
8) O que faz o algoritmo a seguir?
declare i, s como inteiro
s ← 1
repetir i = 0 até i < 5 passo 1
s ← s * i
fim-repetir
escreva s
Implemente o algoritmo utilizando a linguagem C.
*/

#include <stdio.h>

int main(void)
{
    int i, s=1; // s = 1 para não pegar lixo do sistema e não pode ser 0 por que multiplicação por 0 é 0

    for(i=1; i<5; i++) // o problema é que como a variavel i começa no 0, o primeiro ciclo da 0*1 = 0,
                       // a partir dai, sempre vai acorrer multiplicação por 0, por isso deve o i deve iniciar em 1
    {
        s = s * i;
    }
    printf("\n%d", s);
}
