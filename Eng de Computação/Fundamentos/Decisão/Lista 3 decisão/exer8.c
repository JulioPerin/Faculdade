/* Implemente um programa que adivinhe o "n�mero m�gico" entre 0 e 10.
 O programa dever� imprimir a mensagem "Certo! %d � o n�mero m�gico"
quando o jogador acerta o n�mero m�gico, a mensagem "Errado, muito
alto", caso o jogador tenha digitado um n�mero maior que o n�mero
m�gico e a mensagem "Errado, muito baixo", caso o jogador tenha
digitado um n�mero menor que o n�mero m�gico. O n�mero m�gico �
produzido usando o gerador de n�meros rand�micos de C (fun��o rand()
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
