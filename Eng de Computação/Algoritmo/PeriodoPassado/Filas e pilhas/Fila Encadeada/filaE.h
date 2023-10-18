
typedef struct Cell Cell; // Renomea��o da struct Cell

typedef struct FilaE FilaE; // Renomea��o da estruct FilaE

// Cria uma nova c�lula
Cell* criar_celula(int key);

// Fun��o para criar uma fila encadeada
FilaE* criar_filaE();

// Retorna 1 se a fila est� vazia ou 0, caso contr�rio
int filaE_vazia(FilaE* f);

// Enfileirar um item
void enfileirar(int key, FilaE* f);

// Desenfileirar um item da fila
int desenfileirar(FilaE* f);

// Imprimir o conte�do da fila
void imprimir_fila(FilaE* f);

// Desalocar a fila
int liberar_filaE(FilaE* f);
