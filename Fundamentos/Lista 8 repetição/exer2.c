/*
2) Alice e Beto são amigos e sempre que se encontram relembram os
tempos de infância tirando par-ou-ímpar para decidir quem escolhe
o filme a ser assistido, ou qual o restaurante em que vão almoçar,
etc. Escreva um programa para determinar quem ganhou a série de
par-ou-ímpar. A primeira entrada deve ser um
valor que identifica a quantidade de jogos realizados, identificada
pela variável n, que deve ser um número maior que zero. A seguir deve-se
ler os n resultados (R1, R2, R3, ..., Ri) dos jogos. Se Ri = 0 significa
que Alice ganhou o i-ésimo jogo e se Ri = 1 Beto ganhou o i-ésimo jogo,
portanto, essa entrada deve ser validada para aceitar somente o valor 0 ou o valor 1.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int jogos, i, result, alice, beto;

    do//repetir programa
    {
        do{
        printf("Informe o numero de jogos: ");
        scanf("%d", &jogos);
        }while(jogos<=0);

        i=1;
        alice=0;
        beto=0;

           do
            {
            printf("Informe o resultado do jogo %d: ", i);
            scanf("%d", &result);
            if(result == 1 || result == 0)
            {
                if(result == 0)
                {
                    alice++;
                }
                if(result == 1)
                {
                    beto++;
                }
                i++;
            }
            else
            {
                printf("\nValor invalido\n");
            }


            if(i>jogos)
            {
                break;
            }
            }while(result < 1 || result > 0);



        printf("Beto ganhou:%d jogo(s) e Alice ganhous:%d jogo(s)\n", beto, alice);
        if(beto > alice)
        {
            printf("\nBeto ira escolher  \n");
        }
        else
        {
            printf("\nAlice ira escolher  \n");
        }










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
