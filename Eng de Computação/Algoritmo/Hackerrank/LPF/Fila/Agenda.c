
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct{
    char item[MAX_SIZE]; // A lista pode ser de qualquer tipo. Nesse caso, e uma lista de int, mas tambem pode ser de float, char, string, etc.
    int tam; // tamanho da lista
}Lista;

// Funcao para criar uma lista estatica
Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));

    // Ao iniciar a lista, a mesma estara "vazia"
    l->tam = 0;

    return l;
}

// Retorna 1 se a lista esta vazia ou 0, caso contrario
int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

// Retorna 1 se a lista esta cheia ou 0, caso contrario
int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}

// Procura a posicao de um item com a chave e retorna a sua respectiva posicao
// Caso o item nao seja encontrado, e retornado -1
int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        // Procurar na parte "nao vazia" da lista
        for (i = 0; i < l->tam; i++)
            if (l->item[i] == chave)
                return i;
    }

    // Se chegou aqui e porque a lista esta vazia ou o item nao foi encontrado
    return -1;
}

// Um item e inserido no final da lista caso ela nao estiver cheia.
// A funcao retorna 1 se a operacao for bem sucedida ou 0, caso contrario
int inserir(Lista *l, char chave){
    if (!lista_cheia(l)){
        // O item e adicionado no final da lista
        l->item[l->tam] = chave;

        // Se foi adicionado um elemento, entao a lista cresceu
        l->tam++; // l->tam = l->tam + 1; ou l->tam += 1;

        // A insercao foi bem-sucedida
        return 1;
    }

    // Se chegou aqui e porque a lista estava cheia (ou nula)
    return 0;
}

// O item procurado e removido da lista caso ela. Para isso, a lista nao deve estar vazia e o item
// deve existir.
// A funcao retorna 1 se a operacao for bem sucedida ou 0, caso contrario
int remover(Lista *l, int chave){
    int i, p = buscar(l, chave);

    // A chave foi encontrada
    if (p > -1){
        for (i = p; i < l->tam - 1; i++)
            // Deslocamento de itens da lista para ocupar o espaco do item removido
            // Se o item a ser removido for o ultimo, o comando abaixo nao e executado
            l->item[i] = l->item[i + 1];

        // Se foi removido um elemento, entao a lista diminuiu
        l->tam--; // l->tam = l->tam - 1; ou l->tam -= 1;

        // Remocao bem-sucedida
        return 1;
    }

    return 0;
}

// Imprime o conteudo da lista
void imprimir_lista(Lista *l){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%s ", l->item[i]);

        printf("\n");
    }
}

// Libera a lista
// Retorna 1 se a operacao for bem-sucedida ou 0, caso contrario
int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}

char ordem(Lista *l, int pos){

    if (!lista_vazia(l))
    {
        return l->item[pos];
    }

    return -1;
}

char agenda(Lista l, char key)
{


}

int main()
{
    char s[40];
    int i=0;
    int n=8;

    Lista *l1 = criar_lista();

    for(i=0; i<n; i++)
    {

        scanf("%s", &s);
        inserir(l1, s);
    }

    inserir(l1, 'ana');
    inserir(l1, 'anderson');

    imprimir_lista(l1);

    return 0;

}
