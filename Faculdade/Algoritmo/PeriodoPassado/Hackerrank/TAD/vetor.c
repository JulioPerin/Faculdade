#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "vetor.h"

typedef struct Vetor{
    int n; //capacide do vetor
    int q; // quantidade de elementos no vetor
    int *item; //array de numeros inteiros(elementos
}Vetor;

Vetor* iniciar_vetor(int n);{
    Vetor *v = (Vetor*) malloc(sizeof(Vetor));

    v->n = n;
    v->q = 0;

    v->item = (int*) malloc(sizeof(int)* n);

    return v;
}

void inserir_ultimo(Vetor *v, int item);{
    if((v != NULL) && (v->q < v->n)){
        v->item[v->q] = item;
        v->q++;s
    }
}

int remover_elemento(Vetor *v, int pos);{
    int i;
    int aux = -1;

    if((v != NULL) && (pos >= 0) && (pos < v->q)){
        aux = v->item[pos];

        for(i = pos; i< v->q - 1; i++)
        {
            v->item[i] = v->item[i + 1];

            v->q--;
        }

    }

    return aux;
}

void imprimir_vetor(Vetor *v){
    int i;

    if(v != NULL){
        for(i=0; i < v->q; i++)
            printf("%d", v->item[i]);
            printf("\n");
    }
}

void liberar_vetor(Vetor *v);{
    if(v != NULL){
        //free(v->item);
        free(v);
    }
}
