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
