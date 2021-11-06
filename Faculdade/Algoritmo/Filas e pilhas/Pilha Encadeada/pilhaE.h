
typedef struct Cell Cell; // Renomea��o da struct Cell

typedef struct PilhaE PilhaE;  // Renomea��o da struct PilhaE

// Cria uma nova c�lula
Cell* criar_celula(int key);

// Fun��o para criar uma pilha encadeada
PilhaE* criar_pilhaE();

// Retorna 1 se a pilha est� vazia ou 0, caso contr�rio
int pilhaE_vazia(PilhaE *p);

// Inserir, no topo de uma pilha, um novo elemento
void empilhar(int key, PilhaE *p);

// Remover um item do topo da pilha
int desempilhar(PilhaE *p);

// Imprimir conte�do da pilha
void imprimir_pilha(PilhaE *p);

// Desalocar pilha
int liberar_pilha(PilhaE *p);

