#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX_SIZE 100

typedef struct{
    char item[MAX_SIZE][MAX_SIZE];
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

int inserir(Lista *l, char chave[]){
    if (!lista_cheia(l)){
        strcpy(l->item[l->tam], chave);
        l->tam++;
        return 1;
    }
    return 0;
}

int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            if (l->item[i] == chave)
                return i;
    }

    return -1;
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);
        return 1;
    }
    return   0;
}

int lista(Lista *l, char chave[]){
    int i;
    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
                if (strstr(l->item[i],chave)){
                printf("%s\n", l->item[i]);
                }
    }
    return -1;
}

int main(void){
    int n, i;
    char str[25], aux[25];
    Lista *l1 = criar_lista();

    scanf("%s", str);
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s",aux);
        inserir(l1,aux);
    }
    lista(l1, str);

    liberar_lista(l1);

    return 0;
}
