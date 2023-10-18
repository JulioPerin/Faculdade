#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TAM_MAX 100

typedef struct{
    int item[TAM_MAX];
    int ini; // posicao do primeiro item
    int fim; // posicao do ultimo item
    int tam; // tamanho da fila
} Fila;

// Criar uma fila vazia
Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));

    f->ini = -1;
    f->fim = -1;
    f->tam = 0;

    return f;
}

// Verificar se a fila esta cheia
int fila_cheia(Fila *f){

    if (f == NULL)
        return -1; // A fila e nula
    else if (f->tam < TAM_MAX)
        return 0; // A fila nao esta cheia, pois o seu tamanho atingiu a capacidade maxima
    else
        return 1; // fila cheia
}

// Verificar se a fila esta vazia
int fila_vazia(Fila *f){
    if (f == NULL)
        return -1; // A fila e nula
    else if (f->tam > 0)
        return 0; // A fila nao esta vazia, pois o seu tamanho e maior que zero
    else
        return 1; // fila vazia
}

// Colocar um item na fila
int enfileirar(Fila *f, int chave){
    // Se a fila for vazia, um espaco e alocado para ela
    if (f == NULL)
        f = criar_fila();

    // Se a fila nao estiver cheia, enfileirar um item
    // ! => operacao logica de negacao
    // Exemplos:
    // !0 = 1
    // !(numero diferente de 0) = 0
    // Caso a fila seja nula, antes de entrar no comando if, ela e criada
    // ou seja, nao precisa fazer "if (pilha_cheia(p) == 0)"
    if (!fila_cheia(f)){
        // Caso a fila estiver vazia
        if (f->ini < 0)
            f->ini = 0;

        // Ao enfileirar um item, a posicao do ultimo elemento da fila
        // deve se atualizada. Antes da atualizacao, se a posicao fim
        // for menor que a capacidade maxima da lista menos 1, basta
        // apenas incrementar o campo fim. Caso contrario, f->fim = 0;
        if (f->fim < TAM_MAX - 1)
            f->fim++;
        else
            f->fim = 0;

        // Apos a atualizacao da posicao final da fila, basta atribuir o
        // novo item na ultima posicao da fila
        f->item[f->fim] = chave;

        // Atualizar o tamanho da fila, que aumentou
        f->tam++;

        return 1; // Operacao bem sucedida
    }

    return 0; // A fila estava cheia
}

// remover um item da fila
int desenfileirar(Fila *f){
    int item = INT_MIN;

    // Verificar se a fila e vazia (1) ou nula (-1)
    // A unica condicao para "entrar" no comando if e a funcao abaixo
    // retornar 0, cuja negacao e 1
    // Para qualquer retorno diferente de 0, a negacao sera 0
    if (!fila_vazia(f)){
        item = f->item[f->ini];

        // Quando um elemento e desenfileirado, o campo ini deve ser
        // atualizado. Se a posicao ini for menor que a capacidade
        // maxima da lista menos 1, basta apenas incrementar o campo
        // ini. Caso contrario, f->ini = 0;
        if (f->ini < TAM_MAX - 1)
            f->ini++;
        else
            f->ini = 0;

        f->tam--;

        if (f->tam == 0){
            f->ini = -1;
            f->fim = -1;
        }
    }

    return item;
}

// Imprimir conteudo da fila
void imprimir_fila(Fila *f){
    // Uma copia da fila deve ser feita, pois podemos ter acesso
    // aos elementos apenas pela operacao desempilhar, ou seja,
    // se usarmos a fila original (f), perderiamos os seus dados
    Fila aux = *f;
    int item;

    // Como a variavel aux nao e ponteiro, para utilizamos o seu
    // endereco como parametro para chamarmos a funcao fila_vazia
    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);

        printf("%d ", item);
    }

    printf("\n");
}

// liberar fila
void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

int primeiro(Fila* f1) // funcao para retornar o primeiro item
{
    return f1->item[f1->ini];
}

Fila* intercalar(Fila* f1, Fila* f2)
{
    Fila *f3 = criar_fila();
    int aux;

        while(!fila_vazia(f1) && !fila_vazia(f2))
        {
            if (primeiro(f1) >= primeiro(f2))
            {
                aux = desenfileirar(f1);
                enfileirar(f3, aux);
                aux = desenfileirar(f2);
                enfileirar(f3, aux);
            }
            else if(primeiro(f1) < primeiro(f2))
            {
                aux = desenfileirar(f2);
                enfileirar(f3, aux);
                aux = desenfileirar(f1);
                enfileirar(f3, aux);
            }
        }

        while (!fila_vazia(f1))
        {
            aux = desenfileirar(f1);
            enfileirar(f3, aux);

        }

        while (!fila_vazia(f2))
        {
            aux = desenfileirar(f2);
            enfileirar(f3, aux);
        }




        return f3;
}



int main()
{
    int a;
    Fila *f1 = criar_fila();
    Fila *f2 = criar_fila();



    do{
        scanf("%d", &a);
        if(a != -1)
        enfileirar(f1, a);
    }while(a != -1);

    do{
        scanf("%d", &a);
        if(a != -1)
        enfileirar(f2, a);
    }while(a != -1);

    Fila *f3 = intercalar(f1, f2);
    imprimir_fila(f3);


    return 0;
}
