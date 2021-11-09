/*
Crie um TAD para processamento de vetores, onde v é o vetor e n é a quantidade de elementos contidos no vetor:

Input Format:
Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v.
Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o
segundo vetor. Por fim, na última linha devem ser lidas as posições ini e fim para
geração de um subvetor a partir do primeiro vetor que foi lido.

Output Format:
Vetores na seguinte ordem: resultantes da intercalação, resultantes da concatenação e subvetor.


 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    int *v; // Array (vetor) de tamanho n
    int q; // quantidade de itens inseridos em v
    int n; // tamanho (capacidade) de v
}Vetor;

Vetor* iniciar_vetor(int n)
{
    Vetor *v = (Vetor*) malloc(sizeof(Vetor));
    v->v = (int*)malloc(sizeof(int)*n);
    v->n = n;
    v->q = 0;

    return v;
}



int* inserir(Vetor *v, int x)
{
    v->v[v->q] = x;
    v->q++;

    return (int*)v;
}



void imprimir(Vetor *v)
{
    int i;

    for(i=0; i<v->n; i++)
        {
            printf("%d ", v->v[i]);
        }
        printf("\n");
}



Vetor* intercalar(Vetor *v1, Vetor *v2)
{
    int i, x;
    x = v1->q + v2->q;
    Vetor *v3 = iniciar_vetor(x);

    for(i=0; (i < v1->q) && (i < v2->q); i++){
        inserir(v3, v1->v[i]);
        inserir(v3, v2->v[i]);
    }

    for (i = v2->q; i < v1->q; i++)
        inserir(v3, v1->v[i]);

    for (i = v1->q; i < v2->q; i++)
        inserir(v3, v2->v[i]);


    imprimir(v3);
    return v3;

}

Vetor* concatenar(Vetor *v1, Vetor *v2)
{
    int i;
    Vetor *v3 = iniciar_vetor(v1->n + v2->n);

    for(i=0; i<v1->n; i++)
    {
        inserir(v3, v1->v[i]);
    }

    for(i=0; i<v2->n; i++)
    {
        inserir(v3, v2->v[i]);
    }

    //imprimir(v3);
    return v3;
}

Vetor* subvetor(Vetor *v1, int ini, int fim)
{
    int i, j=0, x;
    x = fim - ini;
    int *sub;
    sub = malloc (sizeof (x * 4));

    for(i=ini; i<=fim; i++)
    {
        sub[j] = v1->v[i];
        printf("%d ", sub[j]);
        j++;
    }
    return v1;

}

int main()
{
    /*int n1=4, n2=5, ini=1, fim=2;*/

    int n1, n2, ini, fim, i,a;

    scanf("%d", &n1);
    Vetor *v1 = iniciar_vetor(n1);


    for (i = 0; i < n1; i++){
        scanf("%d", &a);
        inserir(v1, a);
    }


    scanf("%d", &n2);
    Vetor *v2 = iniciar_vetor(n2);

    for (i = 0; i < n2; i++){
        scanf("%d", &a);
        inserir(v2, a);
    }

    scanf("%d %d", &ini, &fim);

    intercalar(v1, v2);
    Vetor *v3 = concatenar(v1, v2);
    imprimir(v3);
    subvetor(v3, ini, fim);
}
