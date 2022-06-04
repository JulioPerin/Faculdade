#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TAM_MAX 100


typedef struct Cell Cell;
typedef struct FilaE FilaE;


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

void semaforo(FilaE* f1, FilaE* f2, FilaE* f3)
{
    int i=0;

    FilaE *f4 = criar_filaE();

    while(!filaE_vazia(f1) || !filaE_vazia(f2) || !filaE_vazia(f3))
    {
         for(i=0; i<=2; i++)
        {
            if(!filaE_vazia(f1))
            {
                enfileirar(desenfileirar(f1), f4);
            }

        }

        for(i=0; i<=2; i++)
        {
            if(!filaE_vazia(f2))
            {
                enfileirar(desenfileirar(f2), f4);
            }
        }

        for(i=0; i<=2; i++)
        {
            if(!filaE_vazia(f3))
            {
                enfileirar(desenfileirar(f3), f4);
            }
        }
    }



    imprimir_fila(f4);
}

int main()
{
  FilaE *f1 = criar_filaE();
  FilaE *f2 = criar_filaE();
  FilaE *f3 = criar_filaE();

  int i=0, j=0, k=0;

  while(i>=0)
  {
      scanf("%d", &i);
      if(i>=0)
      {
          enfileirar(i, f1);
      }
  }
  while(j>=0)
  {
      scanf("%d", &j);
      if(j>=0)
      {
          enfileirar(j, f2);
      }
  }
  while(k>=0)
  {
      scanf("%d", &k);
      if(k>=0)
      {
          enfileirar(k, f3);
      }
  }


  semaforo(f1, f2, f3);

    return 0;
}
