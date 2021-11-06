#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct ItemP{
    int chave;

    /*
    Outros campos
    */
};

struct Pilha{
    ItemP item[TAM_MAX];
    int topo;
};

// Criar uma pilha vazia
Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

// Verificar se a pilha est� cheia (stack overflow)
int pilha_cheia(Pilha *p){
    // Uma solu��o simples
    // Antes de verificar o topo da pilha, primeiro devemos verificar se
    // a pilha � nula
    //return (p != NULL) && p->topo == (TAM_MAX - 1);

    //outra alternativa para implementa��o dessa fun��o para retornar
    //-1: se a pilha for nula
    // 0: se a pilha n�o estiver cheia
    // 1: se a pilha estiver cheia
    if (p == NULL)
        return -1;
    else if (p->topo == (TAM_MAX - 1))
        return 1;
    else
        return 0;
}

// Verificar se a pilha est� vazia (stack overflow)
int pilha_vazia(Pilha *p){
    // Uma solu��o simples
    // Pilha nula ou com o topo igual a -1 � uma pilha vazia
    //return (p == NULL) || (p->topo == -1);

    //outra alternativa para implementa��o dessa fun��o para retornar
    //-1: se a pilha for nula
    // 0: se a pilha n�o estiver vazia
    // 1: se a pilha estiver vazia
    if (p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}

// Inserir um novo item na pilha, caso houver espa�o
int empilhar(Pilha *p, int chave){
    ItemP item;

    // Se a pilha for nula, reservar um espa�o na mem�ria para ela
    if (p == NULL)
        p = criar_pilha();

    // Se a pilha n�o estiver cheia, empilhar um item
    // ! => opera��o l�gica de nega��o
    // Exemplos:
    // !0 = 1
    // !(n�mero diferente de 0) = 0
    // Caso a pilha seja nula, antes de entrar no comando if, ela � criada
    // ou seja, n�o precisa fazer "if (pilha_cheia(p) == 0)"
    if (!pilha_cheia(p)){
        item.chave = chave; // atribuir a chave ao item

        p->topo++; // a pilha aumenta

        p->item[p->topo] = item; // um novo item � empilhado

        return 1; // opera��o bem sucedida
    }

    return 0; // opera
}

// Remover item do topo da pilha, caso essa estrutura n�o estiver vazia
ItemP* desempilhar (Pilha *p){
    ItemP *item = NULL;

    // Verificar se a pilha � vazia (1) ou nula (-1)
    // A �nica condi��o para "entrar" no comando if � a fun��o abaixo
    // retornar 0, cuja nega��o � 1
    // Para qualquer retorno diferente de 0, a nega��o ser� 0
    if (!pilha_vazia(p)){
        item = (ItemP*) malloc(sizeof(ItemP));

        *item = p->item[p->topo];

        p->topo--;
    }

    return item;
}

// Imprimir conte�do da pilha
void imprimir_pilha(Pilha *p){
    // Uma c�pia da pilha deve ser feita, pois podemos ter acesso
    // aos elementos apenas pela opera��o desempilhar, ou seja,
    // se usarmos a pilha original (p), perder�amos os seus dados
    Pilha aux = *p;
    ItemP *item;

    // Como a vari�vel aux n�o � ponteiro, para utilizamos o seu
    // endere�o como par�metro para chamarmos a fun��o pilha_vazia
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%d\n", item->chave);

        // Para cada item desempilhado, um espa�o na mem�ria � alocado
        // para armazen�-lo. Por essa raz�o, devemos liber�-lo ap�s cada
        // uso
        liberar_itemP(item);
    }
}

// Liberar a pilha
void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

// Liberar um item
void liberar_itemP(ItemP *item){
    if (item != NULL)
        free(item);
}

// Obter chave de um item
// Como n�o podemos acessar diretamente os registros das estruturas
// fora do arquivo em que os mesmos s�o declarados, devemos criar
// fun��es para acess�-los
int obter_chaveP(ItemP *item){
    return item->chave;
}

// Obter a posi��o da pilha em que est� o topo
int obter_posicao_topo(Pilha *p){
    if (!pilha_vazia(p))
        return p->topo;
    else
        return -1;
}

Pilha* dec_2_bin(unsigned int x)
{
    Pilha *p = criar_pilha();

    while(x != 0){
        empilhar(p, x % 2);
        x /= 2;
    }
    return p;
}
