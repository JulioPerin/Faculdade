#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Cell Cell;
struct Cell
{
    int item;
    Cell *next;
};

typedef struct
{
    Cell *head;
} ListaE;


Cell* criar_celula(int key)
{
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


ListaE* criar_listaE()
{
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));

    l->head = NULL;

    return l;
}

int listaE_vazia(ListaE *l)
{
    return (l == NULL) || (l->head == NULL);
}


int procurar(int key, ListaE *l)
{
    Cell *aux;
    if (l != NULL)
    {
        aux = l->head;

        while (aux != NULL)
        {
            if (aux->item == key)
                return 1;

            aux = aux->next;
        }
    }

    return 0;
}

void inserir_primeiro(int key, ListaE *l)
{
    Cell *aux;

    if (l == NULL)
        l = criar_listaE();

    aux = criar_celula(key);

    aux->next = l->head;

    l->head = aux;
}

void inserir_ultimo(int key, ListaE *l)
{
    Cell *aux, *novo;
    if (l == NULL)
        l = criar_listaE();

    if (listaE_vazia(l))
        inserir_primeiro(key, l);
    else
    {
        aux = l->head;


        while(aux->next != NULL)
            aux = aux->next;

        novo = criar_celula(key);

        aux->next = novo;
    }
}



int remover(int key, ListaE *l)
{
    Cell *auxA, *auxP = NULL;

    if (!listaE_vazia(l))
    {
        auxA = l->head;
        if(auxA->item == key)
        {
            l->head = l->head->next;
        }
        else
        {
            auxP = auxA;

            while((auxA != NULL) && (auxA->item != key))
            {
                auxP = auxA;
                auxA = auxA->next;
            }
        }

        if (auxA != NULL)
        {
            if (auxP != NULL)
                auxP->next = auxA->next;
            free(auxA);

            return 1;
        }

    }

    return 0;
}


void imprimir(ListaE *l)
{
    Cell *aux;

    if (!listaE_vazia(l))
    {
        aux = l->head;

        while (aux != NULL)
        {
            printf("%d ", aux->item);

            aux = aux->next;
        }

        printf("\n");
    }
}

int liberar_LE(ListaE *l)
{
    Cell *aux = NULL;
    if (l != NULL)
    {
        while(l->head != NULL)
        {
            aux = l->head;

            l->head = aux->next;

            free(aux);
        }

        free(l);

        return 1;
    }

    return 0;
}


int tamanho_LE(ListaE *l)
{
    Cell *aux;
    int tam = 0;

    if (!listaE_vazia(l))
    {
        aux = l->head;

        while(aux != NULL)
        {
            aux = aux->next;

            tam++;
        }
    }

    return tam;
}

void transposicao(int key, ListaE *l)
{
    Cell *aux;
    Cell *aux2=NULL;
    int troca;
    aux = l->head;

    if (!listaE_vazia(l))
    {
        while(aux != NULL && aux->item != key)
        {
            aux2 =aux;
            aux = aux->next;
        }
        if(aux !=NULL && aux2 != NULL){
            troca = aux->item;
            aux->item = aux2->item;
            aux2->item = troca;
        }
    }
}

int main(void)
{
    ListaE *l = criar_listaE();
    int n=0, a, i, b;;

    scanf("%d", &a);

    do
    {
        inserir_ultimo(a, l);
        scanf("%d", &a);
    }while(a!=-1);

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &b);
        transposicao(b, l);
    }

    imprimir(l);
    liberar_LE(l);

    return 0;
}
