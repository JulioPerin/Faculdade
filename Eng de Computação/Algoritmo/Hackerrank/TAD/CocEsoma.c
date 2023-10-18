/*
Crie um TAD para processamento de vetores, onde v e o vetor e n e a quantidade de elementos contidos no vetor:
Input Format:
Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v.
Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o
segundo vetor. Por fim, na ultima linha devem ser lidas as posicoes ini e fim para
geracao de um subvetor a partir do primeiro vetor que foi lido.
Output Format:
Vetores na seguinte ordem: resultantes da intercalacao, resultantes da concatenacao e subvetor.
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

    return v3;
}

Vetor* somar(Vetor *v1, Vetor *v2)
{
    int i, maior, menor;

    if(v1->n >= v2->n)
    {
        maior = v1->n;
        menor = v2->n;
    }
    else
    {
        maior = v2->n;
        menor = v1->n;
    }

    Vetor *v4 = iniciar_vetor(maior);

    for(i=0;i < menor; i++)
    {
        inserir(v4, (v1->v[i] + v2->v[i]));
    }

    for(i = v2->n; i < v1->n; i++)
    {
        inserir(v4, v1->v[i]);
    }

    for(i = v1->n; i< v2->n; i++)
    {
        inserir(v4, v2->v[i]);
    }

    return v4;

}

int Liberar(Vetor *v)
{
    free(v);

    return 0;
}


int main()
{
    /*int n1=5, n2=4;*/

    int n1, n2, i,a;

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


    Vetor *v3 = concatenar(v1, v2);
    imprimir(v3);
    Vetor *v4 = somar(v1, v2);
    imprimir(v4);

    return 0;

}
