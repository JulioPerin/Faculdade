#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct ItemF{
    int chave;
}ItemF;

typedef struct Fila{
    ItemF item[TAM_MAX];
    int ini; // posicao do primeiro item
    int fim; // posicao do ultimo item
    int tam; // tamanho da fila
}Fila;

Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));

    f->ini = -1;
    f->fim = -1;
    f->tam = 0;

    return f;
}


int fila_cheia(Fila *f){

    if (f == NULL)
        return -1;
    else if (f->tam < TAM_MAX)
        return 0;
    else
        return 1;
}


int fila_vazia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}


int enfileirar(Fila *f, int chave){
    ItemF item;

    if (f == NULL)
        f = criar_fila();

    if (!fila_cheia(f)){
        item.chave = chave;

        if (f->ini < 0)
            f->ini = 0;

        if (f->fim < TAM_MAX - 1)
            f->fim++;
        else
            f->fim = 0;

        f->item[f->fim] = item;

        f->tam++;

        return 1;
    }

    return 0;
}

int obter_chaveF(ItemF *item){
    return item->chave;
}


ItemF* desenfileirar(Fila *f){
    ItemF *item = NULL;

    if (!fila_vazia(f)){
        item = (ItemF*) malloc(sizeof(ItemF));

        *item = f->item[f->ini];


        if (f->ini < TAM_MAX - 1)
            f->ini++;
        else
            f->ini = 0;

        f->tam--;

        if (f->tam == 0){
            f->ini = -1;
            f->fim = -1;
        }
    }

    return item;
}
void liberar_itemF(ItemF *item){
    if (item != NULL)
        free(item);
}

void imprimir_fila(Fila *f){

    Fila aux = *f;
    ItemF *item;

    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);

        printf("%d ", obter_chaveF(item));


        liberar_itemF(item);
    }
}

void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

int primeiro(Fila* f1) // funcao para retornar o primeiro item
{
    return f1->item[f1->ini].chave;
}

Fila* intercalar_ordenadamente(Fila* f1, Fila* f2)
{
    Fila *f3 = criar_fila();
    ItemF *item;

    while (!fila_vazia(f1) && !fila_vazia(f2)){
        if (primeiro(f1) < primeiro(f2)){
            item = desenfileirar(f1);
            enfileirar(f3, item->chave);
        }else{
            item = desenfileirar(f2);
            enfileirar(f3, item->chave);
        }

        free(item);
    }

    while (!fila_vazia(f1)){
        item = desenfileirar(f1);
        enfileirar(f3, item->chave);
        free(item);
    }

    while (!fila_vazia(f2)){
        item = desenfileirar(f2);
        enfileirar(f3, item->chave);
        free(item);
    }

    imprimir_fila(f3);
    return f3;
}

int main()
{
    int a;
    Fila *f1 = criar_fila();
    Fila *f2 = criar_fila();

    /*enfileirar(f1, 2);
    enfileirar(f1, 3);
    enfileirar(f1, 4);
    enfileirar(f1, 6);
    enfileirar(f1, 7);

    enfileirar(f2, 1);
    enfileirar(f2, 5);
    enfileirar(f2, 8); */

    do{
        scanf("%d", &a);
        if(a != -1)
        enfileirar(f1, a);
    }while(a != -1);

    do{
        scanf("%d", &a);
        if(a != -1)
        enfileirar(f2, a);
    }while(a != -1);

    intercalar_ordenadamente(f1, f2);


    return 0;
}
