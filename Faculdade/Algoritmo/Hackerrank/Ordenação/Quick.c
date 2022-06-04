#include <stdio.h>
#include <stdlib.h>

void inverte(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void quicksimplesv2(int x[], int esq, int dir, int m){

    int i = esq, j = dir, pivo = x[(i + j) / 2];
    int tam = dir;

    if(esq-dir+1>m)
    {
        do{
            while (x[i] < pivo)
            {
                i++;
            }

            while (x[j] > pivo)
            {
                j--;
            }

            if (i <= j)
            {
                inverte(&x[i], &x[j]);
                i++;
                j--;
            }
        }while (i <= j);
        if (j > esq)
            quicksimplesv2(x, esq, j, m);
        if (i < dir)
            quicksimplesv2(x, dir, j, m);
    }
    else
    {

        int k, l, troca = 1;

        for (k = 0; (k < tam - 1) && (troca); i++){
            troca = 0;

        for (l = 0; l < tam - i - 1; l++)
            if (x[l] > x[l + 1]){

                inverte(&x[l], &x[l+1]);
                troca = 1;
            }
    }
    }

    for (i = 0; i < tam; i++)
        printf("%d ", x[i]);
}

int main(){
    int i;
    int v[30], tam, m;

    scanf("%d", &tam);

    for(i=0; i<tam; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);


    quicksimplesv2(v, 0, tam, m);

    return 0;
}
