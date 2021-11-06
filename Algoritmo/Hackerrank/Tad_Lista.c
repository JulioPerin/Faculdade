#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct ItemL{
    int chave;
}ItemL;


typedef struct Lista{
    ItemL item[MAX_SIZE];
    int tam;
}Lista;


Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));

    l->tam = 0;

    return l;
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}

int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){

        for (i = 0; i < l->tam; i++)
            if (l->item[i].chave == chave)
                return i;
    }


    return -1;
}

int inserir(Lista *l, int chave){
    ItemL item;


    if (!lista_cheia(l)){



        item.chave = chave;


        l->item[l->tam] = item;
        l->tam++;


        return 1;
    }


    return 0;
}


void imprimir_lista(Lista *l){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%d ", l->item[i].chave);
    }
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}

int* inverter_lista(Lista *l1, Lista *l2, Lista *l3)
{
    int i;

    for (i = (l1->tam -1); i >= 0; i--)
    {
        inserir(l3, l1->item[i].chave);
    }

    for (i = (l2->tam -1); i >= 0; i--)
    {
        inserir(l3, l2->item[i].chave);
    }
    return (int*)l3;
}
int main()
{
    int a;

    Lista *l1 = criar_lista();
    Lista *l2 = criar_lista();
    Lista *l3 = criar_lista();

    do{
        scanf("%d", &a);
        if(a != -1)
        inserir(l1, a);
    }while(a != -1);

    do{
        scanf("%d", &a);
        if(a != -1)
        inserir(l2, a);
    }while(a != -1);

    inverter_lista(l1, l2, l3);
    imprimir_lista(l3);

    return 0;

}
