#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TAM_MAX 100


typedef struct Cell Cell;
typedef struct FilaE FilaE;

typedef struct{
    int item[TAM_MAX];
    int topo;
}Pilha;

struct Cell{
    int item; // Pode ser uma struct, union, ou quanquer tipo de dados.
              // Para possibilitar o reuso dessa celula para qualquer
              // tipo de informacao, recomendo o uso de ponteiro
              // generico. Exemplo: void* item;
    Cell *next;
};


// Estrutura para representar filas encadeadas
struct FilaE{
    Cell *inicio;
    Cell *fim;
};


// Cria uma nova celula
Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


// Funcao para criar uma fila encadeada
FilaE* criar_filaE(){
    FilaE *f = (FilaE*) malloc(sizeof(FilaE));

    f->inicio = NULL;
    f->fim = NULL;

    return f;
}


// Retorna 1 se a fila esta vazia ou 0, caso contrario
int filaE_vazia(FilaE* f){
    return (f == NULL) || (f->inicio == NULL);
}


// Enfileirar um item
void enfileirar(int key, FilaE* f){
    Cell *aux; // Nova celula

    // Caso a pilha encadeada seja nula,
    // alocar um espaco para essa estrutura
    if (f == NULL)
        f = criar_filaE();

    // Criar nova celula
    aux = criar_celula(key);

    // Caso a fila ainda esteja vazia, o primeiro e
    // o ultimo elemento sao iguais
    if (f->inicio == NULL)
        f->inicio = f->fim = aux;
    else{
        // Caso a fila nao esteja vazia, basta atualizar
        // o final da estrutura
        f->fim->next = aux;
        f->fim = f->fim->next;
    }

}


// Desenfileirar um item da fila
int desenfileirar(FilaE* f){
    Cell *aux; // Primeiro elemento da fila
    int item = -INT_MAX; // Valor que esta no inicio da fila

    if (!filaE_vazia(f)){
    	// obter o primeiro elemento da fila
        aux = f->inicio;

        f->inicio = aux->next;

        // Acessar o conteudo da celula
        item = aux->item;

        // Liberar a celula desenfileirada
        free(aux);
    }

    return item;
}


// Imprimir o conteudo da fila
void imprimir_fila(FilaE* f){
    Cell *aux; // Para percorrer a fila, deve ser utilizada
    	       // uma variavel auxiliar para nao perder o
    	       // topo da lista

    if (!filaE_vazia(f)){
        aux = f->inicio;

        while (aux != NULL){
            printf("%d ", aux->item);
            aux = aux->next;
        }
    }
}


// Desalocar a fila
int liberar_filaE(FilaE* f){
    if (!filaE_vazia(f)){
        while (f->inicio != NULL)
            desenfileirar(f);

        free(f);

        return 1;
    }

    return 0;
}



// Criar uma pilha vazia
Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

// Verificar se a pilha esta cheia (stack overflow)
int pilha_cheia(Pilha *p){
    // Uma solucao simples
    // Antes de verificar o topo da pilha, primeiro devemos verificar se
    // a pilha e nula
    //return (p != NULL) && p->topo == (TAM_MAX - 1);

    //outra alternativa para implementacao dessa funcao para retornar
    //-1: se a pilha for nula
    // 0: se a pilha nao estiver cheia
    // 1: se a pilha estiver cheia
    if (p == NULL)
        return -1;
    else if (p->topo == (TAM_MAX - 1))
        return 1;
    else
        return 0;
}

// Verificar se a pilha esta vazia (stack overflow)
int pilha_vazia(Pilha *p){
    // Uma solucao simples
    // Pilha nula ou com o topo igual a -1 e uma pilha vazia
    //return (p == NULL) || (p->topo == -1);

    //outra alternativa para implementacao dessa funcao para retornar
    //-1: se a pilha for nula
    // 0: se a pilha nao estiver vazia
    // 1: se a pilha estiver vazia
    if (p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}

// Inserir um novo item na pilha, caso houver espaco
int empilhar(Pilha *p, int item){
    // Se a pilha for nula, reservar um espaco na memoria para ela
    if (p == NULL)
        p = criar_pilha();

    // Se a pilha nao estiver cheia, empilhar um item
    // ! => operacao logica de negacao
    // Exemplos:
    // !0 = 1
    // !(numero diferente de 0) = 0
    // Caso a pilha seja nula, antes de entrar no comando if, ela e criada
    // ou seja, nao precisa fazer "if (pilha_cheia(p) == 0)"
    if (!pilha_cheia(p)){
        p->topo++; // a pilha aumenta

        p->item[p->topo] = item; // um novo item e empilhado

        return 1; // operacao bem sucedida
    }

    return 0; // opera
}

// Remover item do topo da pilha, caso essa estrutura nao estiver vazia
int desempilhar (Pilha *p){
    int item = INT_MIN;

    // Verificar se a pilha e vazia (1) ou nula (-1)
    // A unica condicao para "entrar" no comando if e a funcao abaixo
    // retornar 0, cuja negacao e 1
    // Para qualquer retorno diferente de 0, a negacao sera 0
    if (!pilha_vazia(p)){
        item = p->item[p->topo];

        p->topo--;
    }

    return item;
}

// Imprimir conteudo da pilha
void imprimir_pilha(Pilha *p){
    // Uma copia da pilha deve ser feita, pois podemos ter acesso
    // aos elementos apenas pela operacao desempilhar, ou seja,
    // se usarmos a pilha original (p), perderiamos os seus dados
    Pilha aux = *p;
    int item;

    // Como a variavel aux nao e ponteiro, para utilizamos o seu
    // endereco como parametro para chamarmos a funcao pilha_vazia
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%d", item);
    }
}

// Liberar a pilha
void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}


// Obter a posicao da pilha em que esta o topo
int obter_posicao_topo(Pilha *p){
    if (!pilha_vazia(p))
        return p->topo;
    else
        return -1;
}

void ultimos(Pilha *p)
{
    FilaE *f = criar_filaE();

    if(!pilha_vazia(p))
    {
        while(!pilha_vazia(p))
        {
            enfileirar(desempilhar(p), f);
        }
    }

    imprimir_fila(f);

}

int main()
{
  Pilha *p = criar_pilha();

  int i=0;

  while(i>=0)
  {
      scanf("%d", &i);
      if(i>=0)
      {
          empilhar(p, i);
      }
  }

  ultimos(p);

}
