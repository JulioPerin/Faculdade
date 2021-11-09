/*
Implemente uma função que receba um vetor de números inteiros, o tamanho do vetor e dois números inteiros,
sendo um para posição inicial e o outro para a posição final. A função deverá retornar um vetor com elementos
entre as posições inicial e a final do vetor de entrada.

Input format:
Na primeira linha deve ser lido o tamanho do vetor.
Na segunda linha, todos os elementos do vetor deverão ser lidos.
Na terceira linha, deverão ser lidos dois números inteiros, sendo o primeiro para a posição inicial e o segundo, para a posição final.

Output Format:
Após a geração do subvetor, o conteúdo do mesmo deverá ser impresso.

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
