/*
Implemente uma fun��o que receba um vetor de n�meros inteiros, o tamanho do vetor e dois n�meros inteiros,
sendo um para posi��o inicial e o outro para a posi��o final. A fun��o dever� retornar um vetor com elementos
entre as posi��es inicial e a final do vetor de entrada.

Input format:
Na primeira linha deve ser lido o tamanho do vetor.
Na segunda linha, todos os elementos do vetor dever�o ser lidos.
Na terceira linha, dever�o ser lidos dois n�meros inteiros, sendo o primeiro para a posi��o inicial e o segundo, para a posi��o final.

Output Format:
Ap�s a gera��o do subvetor, o conte�do do mesmo dever� ser impresso.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int* subvetor(int *v, int n, int ini, int fim)
{
    int i, j=0, x;
    x = fim - ini;
    int *sub;
    sub = malloc (sizeof (x * 4));

    for(i=ini; i<=fim; i++)
    {
        sub[j] = v[i];
        printf("%d ", sub[j]);
        j++;
    }
    return (int*)v;

}


int main() {

    /*int i, v=7, ini=1, fim=4;
    int vetor[7] = {2, 4, 5, 6, 7, 9, 1};*/

    int i, v, ini, fim;
    scanf("%d", &v);
    int vetor[v];


    for(i=0; i<v; i++)
    {
        scanf("%d ", &vetor[i]);
    }

    scanf("%d %d", &ini, &fim);

    subvetor(vetor, v, ini, fim);

    return 0;
}
