/*
Implemente uma fun��o que receba uma lista encadeada. A fun��o dever� inverter a lista recebida como entrada.

Input Format:
Enquanto -1 n�o for lido, ler n�meros inteiros.

Output Format:
Imprimir a lista invertida.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Cell Cell;

typedef struct Cell{
    int item;
    Cell *next;
}Cell;

typedef struct ListaE{
    Cell *head;
}ListaE;

typedef struct ListaE ListaE;

Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}

ListaE* criar_listaE(){
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));

    l->head = NULL;

    return l;
}

int listaE_vazia(ListaE *l){
    return (l == NULL) || (l->head == NULL);
}

int procurar(int key, ListaE *l){
    Cell *aux;

    if (l != NULL){
        aux = l->head;

        while (aux != NULL){
            if (aux->item == key)
            	return 1;

            aux = aux->next;
        }
    }

    return 0;
}

void inserir_primeiro(int key, ListaE *l){
    Cell *aux;


    if (l == NULL)
        l = criar_listaE();

    aux = criar_celula(key);
    aux->next = l->head;
    l->head = aux;
}

void inserir_ultimo(int key, ListaE *l){
    Cell *aux, *novo;

    if (l == NULL)
        l = criar_listaE();

    if (listaE_vazia(l))
        inserir_primeiro(key, l);
    else{
        aux = l->head;

        while(aux->next != NULL)
            aux = aux->next;


        novo = criar_celula(key);
        aux->next = novo;
    }
}

int remover(int key, ListaE *l){
    Cell *auxA, *auxP = NULL;

    if (!listaE_vazia(l)){
        auxA = l->head;


        if(auxA->item == key){

            l->head = l->head->next;
        }else{

            auxP = auxA;


            while((auxA != NULL) && (auxA->item != key)){

                    auxP = auxA;

                auxA = auxA->next;
            }
        }

        if (auxA != NULL){

            if (auxP != NULL)
            	auxP->next = auxA->next;


            free(auxA);

        	return 1;
        }

    }

    return 0;
}

void imprimir(ListaE *l){
    Cell *aux;

    if (!listaE_vazia(l)){
        aux = l->head;

        while (aux != NULL){
            printf("%d ", aux->item);

            aux = aux->next;
        }

        printf("\n");
    }
}

int liberar_LE(ListaE *l){
    Cell *aux = NULL;

    if (l != NULL){
        while(l->head != NULL){
            aux = l->head;

            l->head = aux->next;

            free(aux);
        }

        free(l);

        return 1;
    }

    return 0;
}

int tamanho_LE(ListaE *l){
    Cell *aux;
    int tam = 0;

     if (!listaE_vazia(l)){
        aux = l->head;

        while(aux != NULL){
            aux = aux->next;

            tam++;
        }
    }

    return tam;
}

void inverter(ListaE *l)
{
    Cell *aux;
    Cell *inv = NULL;

    if (!listaE_vazia(l))
    {
        while (l->head != NULL)
        {
            aux = l->head;
            l->head = aux->next;
            aux->next = inv;
            inv = aux;
        }

        l->head = inv;
    }
    imprimir(l);
}

int main()
{
    int a;
    ListaE *l = criar_listaE();

    do
    {
        scanf("%d", &a);
        if(a != -1)
        {
            inserir_ultimo(a, l);
        }

    }while(a != -1);

    /*inserir_ultimo(1, l);
    inserir_ultimo(2, l);
    inserir_ultimo(3, l);
    inserir_ultimo(4, l);
    inserir_ultimo(5, l);
    inserir_ultimo(6, l);*/

    inverter(l);



    return 0;
}
