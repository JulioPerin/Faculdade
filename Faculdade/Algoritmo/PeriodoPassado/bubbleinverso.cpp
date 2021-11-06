#include <stdio.h>

void bubblesort_v2(int v[], int n)
{
    int i, j, x, troca=1;

    for(i=n-1; (i >=0) && (troca); i--)
    {
        troca =0;
        for (j =  i - 1; j>0; j--)
            if(v[j]<v[j-1])
            {
                x = v[j];
                v[j] = v[j-1];
                v[j-1]= x;
                troca = 1;
            }
    }
}

int main()
{
    int v[] = {7,5,9,5,4,3,2,1};
    int i;

    bubblesort_v2(v, 8);

    for(i=0; i<88; i++)
        printf("%d\n", v[i]);
}
