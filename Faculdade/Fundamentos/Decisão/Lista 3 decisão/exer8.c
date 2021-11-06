/* Implemente um programa que adivinhe o "número mágico" entre 0 e 10.
 O programa deverá imprimir a mensagem "Certo! %d é o número mágico"
quando o jogador acerta o número mágico, a mensagem "Errado, muito
alto", caso o jogador tenha digitado um número maior que o número
mágico e a mensagem "Errado, muito baixo", caso o jogador tenha
digitado um número menor que o número mágico. O número mágico é
produzido usando o gerador de números randômicos de C (função rand()
, que exige o uso da biblioteca stdlib.h). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int randNum, chute;

    printf("Tente adivinhar o numero magico entre 0 e 10: ");
    scanf("%d", &chute);

    srand(time(NULL));
    randNum = rand() % (10+1);

   printf("\nO numero magico era=%d\n", randNum);

    if(randNum == chute)
    {
        printf("\nParabens, voce acertou!\n");
    }
    else if(randNum > chute)
    {
        printf("\nErrado, muito baixo!\n");
    }
    else if(randNum < chute)
    {
        printf("\nErrado, muito alto!\n");
    }
    return 0;
}
