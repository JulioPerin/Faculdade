
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct{
    int item[MAX_SIZE]; // A lista pode ser de qualquer tipo. Nesse caso, e uma lista de int, mas tambem pode ser de float, char, string, etc.
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
int inserir(Lista *l, int chave){
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
            printf("%d ", l->item[i]);

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

int ordem(Lista *l, int pos){

    if (!lista_vazia(l))
    {

        return l->item[pos];
    }

    return -1;
}

int parimpar(Lista *l1, Lista *par, Lista *impar)
{
    int i=0;

    if (!lista_vazia(l1))
    {
        for(i=0; i<l1->tam; i++)
        {
            if((ordem(l1, i) % 2) == 0)
            {
                inserir(par, ordem(l1, i));
            }

            else
            {
                inserir(impar, ordem(l1, i));
            }
        }
    }

        printf("par: ");
        imprimir_lista(par);
        printf("impar: ");
        imprimir_lista(impar);

        return 0;



}

int main()
{
    int a;
    Lista *l1 = criar_lista();
    Lista *l2 = criar_lista();
    Lista *l3 = criar_lista();

    /*do{
        scanf("%d", &a);
        if(a != -1)
        inserir(l1, a);
    }while(a != -1); */

    inserir(l1, 39);
    inserir(l1, 4);
    inserir(l1, 4);
    inserir(l1, 4);
    inserir(l1, 4);
    inserir(l1, 4);
    inserir(l1, 4);



    parimpar(l1, l2, l3);

    return 0;

}
