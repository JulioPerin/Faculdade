/*
Implemente uma funcao que receba uma fila encadeada (representacao do estacionamento)
e um numero inteiro (ticket ou id do carro) como parametros e faca o gerenciamento de
veiculos no estacionamento do Pupunha. Enquanto o ticket nao for encontrado, o primeiro
elemento da fila devera ser removido e recolocado no final da fila. Tambem, deve ser
tratado o caso em que o elemento nao e encontrado na fila. A funcao devera retornar um numero
inteiro representado a quantidade de veiculos que precisaram ser estacionados novamente para
que o cliente pudesse retirar o seu carro.

Input Format:
Na primeira linha, enquanto -1 nao for lido, ler numeros inteiros. Na segunda linha deve ser
lido um numero inteiro que sera o ticket a ser procurado na fila.

Constraints:
O acesso aos elementos da fila deve ser atraves da funcao desenfileirar.

Output Format:
Na primeira linha, o conteudo da fila, apos a operacao de busca, deve ser impresso. Na segunda
linha impresso a quantidade de movimentacoes que foram necessarias para procurar o ticket.
Na terceira linha deve ser impressa a string "sucesso" caso o ticket for encontrado, ou "falha",
caso contrario.

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Cell Cell;

typedef struct Cell{
    int item;
    Cell *next;
}Cell;

typedef struct FilaE{
    Cell *inicio;
    Cell *fim;
}FilaE;

Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


FilaE* criar_filaE(){
    FilaE *f = (FilaE*) malloc(sizeof(FilaE));

    f->inicio = NULL;
    f->fim = NULL;

    return f;
}

int filaE_vazia(FilaE* f){
    return (f == NULL) || (f->inicio == NULL);
}

void enfileirar(int key, FilaE* f){
    Cell *aux;

    if (f == NULL)
        f = criar_filaE();


    aux = criar_celula(key);

    if (f->inicio == NULL)
        f->inicio = f->fim = aux;
    else{

        f->fim->next = aux;
        f->fim = f->fim->next;
    }

}


int desenfileirar(FilaE* f){
    Cell *aux;
    int item = -INT_MAX;

    if (!filaE_vazia(f)){
        aux = f->inicio;

        f->inicio = aux->next;

        item = aux->item;

        free(aux);
    }

    return item;
}


void imprimir_fila(FilaE* f){
    Cell *aux;

    if (!filaE_vazia(f)){
        aux = f->inicio;

        while (aux != NULL){
            printf("%d ", aux->item);
            aux = aux->next;
        }
    }
}


int liberar_filaE(FilaE* f){
    if (!filaE_vazia(f)){
        while (f->inicio != NULL)
            desenfileirar(f);

        free(f);

        return 1;
    }

    return 0;
}

int inicio_fila(FilaE *f){
    Cell *aux;
    aux = f->inicio;

    return aux->item;
}

int gerenciar_estacionamento(FilaE *f, int a)
{
    int cont=0;

    if(!filaE_vazia(f))
    {
        if(inicio_fila(f) == a)
        {
            imprimir_fila(f);
            printf("\n0\n");
            printf("sucesso");
            return 0;
        }

        while(inicio_fila(f) != a)
        {
                enfileirar(inicio_fila(f), f);
                desenfileirar(f);
                cont++;
        }
        if(inicio_fila(f) == a)
        {
            desenfileirar(f);
        }
    }
    else
    {
        return -1;
    }

    imprimir_fila(f);
    printf("\n%d\n", cont);
    printf("sucesso");
    return cont;

}

int main()
{
    int a;
    FilaE *f = criar_filaE();

    do
    {
        scanf("%d", &a);
        if(a != -1)
        {
            enfileirar(a, f);
        }

    }while(a != -1);

    scanf("%d", &a);

    /*enfileirar(1, f);
    enfileirar(2, f);
    enfileirar(3, f);
    enfileirar(4, f);
    enfileirar(5, f);
    enfileirar(6, f);
    enfileirar(7, f);
    enfileirar(8, f);*/

   gerenciar_estacionamento(f, a);

    return 0;
}

