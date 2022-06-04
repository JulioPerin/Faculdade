#include <stdio.h>
#include <stdlib.h>

void bubble(int v[], int n)
{

    int aux;
    int i;

    if (n == 1)
        return;

    for (i=0; i<n-1; i++)
    {
        if (v[i] > v[i+1])
        {
            aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;
        }
    }

    bubble(v, n-1);
}

void imprimir(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
}

int main ()
{
    int n, v[30], i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

   bubble(v, n);
   imprimir(v, n);

   return 0;
}
