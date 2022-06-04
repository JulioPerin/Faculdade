#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *vetor = (int*)malloc(sizeof(int));
    int n;
    int i = 0;
    int tamanho = 0;
    do{

        scanf("%d", &n);

        if(n != -1)
        {
            tamanho++;
            vetor = realloc(vetor, tamanho * sizeof(int));
            vetor[i] = n;
            i++;
        }

    }while(n != -1);

    printf("\n");

    for(int j = 0; j < tamanho; j++){
        printf("%d ", vetor[j]);
    }

}
