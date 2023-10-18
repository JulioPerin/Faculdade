#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "lista.h"

// Estrutura para uma unidade da lista est�tica
struct ItemL{
    int chave;

    /*
    Aqui pode conter outros campos, mas para fins did�ticos e agilidade na implementa��o,
    nos exemplos foram considerados apenas um campo
    */
};

// Estrutura para uma lista est�tica
struct Lista{
    ItemL item[MAX_SIZE];
    int tam; // tamanho da lista
};

// Fun��o para criar uma lista est�tica
Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));

    // Ao iniciar a lista, a mesma estar� "vazia"
    l->tam = 0;

    return l;
}

// Retorna 1 se a lista est� vazia ou 0, caso contr�rio
int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

// Retorna 1 se a lista est� cheia ou 0, caso contr�rio
int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}

// Procura a posi��o de um item com a chave e retorna a sua respectiva posi��o
// Caso o item n�o seja encontrado, � retornado -1
int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        // Procurar na parte "n�o vazia" da lista
        for (i = 0; i < l->tam; i++)
            if (l->item[i].chave == chave)
                return i;
    }

    // Se chegou aqui � porque a lista est� vazia ou o item n�o foi encontrado
    return -1;
}

// Um item � inserido no final da lista caso ela n�o estiver cheia.
// A fun��o retorna 1 se a opera��o for bem sucedida ou 0, caso contr�rio
int inserir(Lista *l, int chave){
    ItemL item;

    if (!lista_cheia(l)){
        // atribui��o no campo chave do item
        item.chave = chave;

        // O item � adicionado no final da lista
        l->item[l->tam] = item;

        // Se foi adicionado um elemento, ent�o a lista cresceu
        l->tam++; // l->tam = l->tam + 1; ou l->tam += 1;

        // A inser��o foi bem-sucedida
        return 1;
    }

    // Se chegou aqui � porque a lista estava cheia (ou nula)
    return 0;
}

// O item procurado e removido da lista caso ela. Para isso, a lista n�o deve estar vazia e o item
// deve existir.
// A fun��o retorna 1 se a opera��o for bem sucedida ou 0, caso contr�rio
int remover(Lista *l, int chave){
    int i = buscar(l, chave);

    // A chave foi encontrada
    if (i > -1){
        for (i; i < l->tam - 1; i++)
            // Deslocamento de itens da lista para ocupar o espa�o do item removido
            // Se o item a ser removido for o �ltimo, o comando abaixo n�o � executado
            l->item[i] = l->item[i + 1];

        // Se foi removido um elemento, ent�o a lista diminuiu
        l->tam--; // l->tam = l->tam - 1; ou l->tam -= 1;

        // Remo��o bem-sucedida
        return 1;
    }

    return 0;
}

// Imprime o conte�do da lista
void imprimir_lista(Lista *l){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%d\n", l->item[i].chave);
    }
}

// Libera a lista
// Retorna 1 se a opera��o for bem-sucedida ou 0, caso contr�rio
int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}
