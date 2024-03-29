
#define TAM_MAX 100 // tamanho m�ximo da fila

typedef struct ItemF ItemF;

typedef struct Fila Fila;

// Criar uma fila vazia
Fila* criar_fila();

// Verificar se a fila est� cheia
int fila_cheia(Fila *f);

// Verificar se a fila est� vazia
int fila_vazia(Fila *f);

// Colocar um item na fila
int enfileirar(Fila *f, int chave);

// remover um item da fila
ItemF* desenfileirar(Fila *f);

// Imprimir conte�do da fila
void imprimir_fila(Fila *f);

// liberar fila
void liberar_fila(Fila *f);

// Liberar um item
void liberar_itemF(ItemF *item);

// Obter chave de um item
int obter_chaveF(ItemF *item);
