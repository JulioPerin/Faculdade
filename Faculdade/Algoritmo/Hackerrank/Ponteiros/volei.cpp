/*
Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

Input Format:
A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores.
Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A representam
a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1  com o número de saques,
bloqueios e ataques deste jogador que tiveram sucesso.

Output Format

A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado nos exemplos.
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;

void calcula_taxa(Jogador *j, int n)
{

    int i;
    float saque, ataque, bloqueio;
    float saqueTotal=0, bloqueioTotal=0, ataqueTotal=0;
    float saqueSucesso=0, bloqueioSucesso=0, ataqueSucesso=0;


    for(i=0; i<n; i++)
    {

        saqueTotal = saqueTotal + j[i].saquesTotal;  //contador de saques
        saqueSucesso = saqueSucesso + j[i].saquesSucesso;

        bloqueioTotal = bloqueioTotal + j[i].bloqueiosTotal;   //contador de bloqueios
        bloqueioSucesso = bloqueioSucesso + j[i].bloqueiosSucesso;

        ataqueTotal = ataqueTotal + j[i].ataquesTotal;   //contador de ataques
        ataqueSucesso = ataqueSucesso + j[i].ataquesSucesso;
    }


    saque = (100 * saqueSucesso) / saqueTotal ;
    bloqueio = (100 * bloqueioSucesso) / bloqueioTotal;
    ataque = (100 * ataqueSucesso) / ataqueTotal;


    printf("Pontos de Saque: %.2f%%\nPontos de Bloqueio: %.2f%%\nPontos de Ataque: %.2f%%\n", saque, bloqueio, ataque);


}


int main(void) {

    int i, equipe;

    scanf("%d", &equipe);
    Jogador player[equipe];

   for(i=0; i<equipe; i++)  //preencher o vetor de structs
    {
    scanf(" %[^\n]s", player[i].nome);
    scanf("%d %d %d", &player[i].saquesTotal, &player[i].bloqueiosTotal, &player[i].ataquesTotal);
    scanf("%d %d %d", &player[i].saquesSucesso, &player[i].bloqueiosSucesso, &player[i].ataquesSucesso);
   }

   calcula_taxa(player, equipe);



    return 0;
}
