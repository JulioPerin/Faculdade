#include <stdio.h>
#include <stdlib.h>

int buscabinaria(int tam, int* v, int n)
{
    int ini=0, fim=tam-1, meio;

    while(ini <= fim)
    {
        meio = (ini + fim)/2;
        if(n < v[meio])
        {
            fim = meio -1;
        }
        else if(n > v[meio])
        {
            ini = meio + 1;
        }
        else return meio;
    }
    return -1;
}

int main()
{
    int vet[]={3,5,7,9,13};
    int tam = sizeof(vet)/sizeof(int);

    printf("%d \n", buscabinaria(tam, vet, 15));

    return 0;
}
