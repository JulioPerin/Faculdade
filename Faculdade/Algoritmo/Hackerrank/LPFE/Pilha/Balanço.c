#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct Cell Cell;
typedef struct PilhaE PilhaE;

// Estrutura para representar celulas
struct Cell{
    char item; // Pode ser uma struct, union, ou quanquer tipo de dados.
              // Para possibilitar o reuso dessa celula para qualquer
              // tipo de informacao, recomendo o uso de ponteiro
              // generico. Exemplo: void* item;
    Cell *next;
};


// Estrutura de dados para representar uma pilha
struct PilhaE{
    Cell *topo;
};


// Cria uma nova celula
Cell* criar_celula(char key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


// Funcao para criar uma pilha encadeada
PilhaE* criar_pilhaE(){
    PilhaE* p = (PilhaE*) malloc(sizeof(PilhaE));

    p->topo = NULL;

    return p;
}


// Retorna 1 se a pilha esta vazia ou 0, caso contrario
int pilhaE_vazia(PilhaE *p){
    return (p == NULL) || (p->topo == NULL);
}


// Inserir, no topo de uma pilha, um novo elemento
void empilhar(char key, PilhaE *p){
    Cell *aux; // Nova celula

    // Caso a pilha encadeada seja nula,
    // alocar um espaco para essa estrutura
    if (p == NULL)
        p = criar_pilhaE();

    // Criar nova celula
    aux = criar_celula(key);

    // Apontar a nova celula para o topo da pilha
    aux->next = p->topo;

    // Atualizar topo da pilha
    p->topo = aux;
}


// Remover um item do topo da pilha
int desempilhar(PilhaE *p){
    Cell *aux; // Topo da pilha a ser removido
    int item = -INT_MAX; // Valor que esta no topo

    if (!pilhaE_vazia(p)){
        // obter a celula do topo da pilha
        aux = p->topo;

        // Acessar o conteudo da celula
        item = aux->item;

        // Atualizar o topo da pilha
        p->topo = aux->next;

        // Liberar a celula desempilhada
        free(aux);
    }

    return item;
}

// Imprimir conteudo da pilha
void imprimir_pilha(PilhaE *p){
    Cell *aux; // Para percorrer a pilha, deve ser utilizada
               // uma variavel auxiliar para nao perder o
               // topo da pilha

    if (!pilhaE_vazia(p)){
        aux = p->topo;

        while (aux != NULL){
            printf("%c", aux->item);

            aux = aux->next;
        }
    }
}


// Desalocar pilha
int liberar_pilha(PilhaE *p){
    if (p != NULL){
        while (!pilhaE_vazia(p))
            desempilhar(p);

        free(p);

        return 1;
    }

    return 0;
}


int balanco_parenteses(char string[])
{
    int i;
    PilhaE *p = criar_pilhaE();

    for(i=0; i<strlen(string); i++)
    {
        if(string[i] == '(')
        {
            empilhar('(', p);
        }

        if(string[i] == ')' && pilhaE_vazia(p) == 0)
        {
            if(string[i] == ')' && pilhaE_vazia(p) == 1)
                {
                    printf("incorrect");
                    return 0;
                }
            desempilhar(p);
        }
        else if(string[i] == ')' && pilhaE_vazia(p) == 1)
        {
            printf("incorrect\n");
            return 0;
        }
    }

    if(pilhaE_vazia(p) == 1)
    {
        printf("correct\n");
        return 1;
    }
    else
    {
        printf("incorrect\n");
        return 0;
    }

}

int main()
{
     char string[30];
     int i, a;

     scanf("%d", &a);

     for(i=0; i<a; i++)
     {
         scanf("%s", string);
         balanco_parenteses(string);
     }

    return 0;
}
