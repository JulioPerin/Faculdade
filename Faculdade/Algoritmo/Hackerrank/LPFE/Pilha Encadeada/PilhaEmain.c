/*
Implemente uma funcao que receba duas strings: str1 e str2. A funcao devera utilizar uma
pilha encadeada de caracteres para verificar de str2 e equivalente ao inverso de str1

Input Format:
Na primeira e na segunda linha deve ser lida uma string (str1 e str2).

Constraints:
Para acessar um elemento na pilha, deve ser utilizada a funcao desempilhar ou implementar uma
funcao que retorne o elemento que esta no topo da pilha. Para inserir um elemento na pilha, deve
ser utilizada a funcao empilhar.

Output Format:
Imprimir "sim" caso str2 seja equivalente ao inverso de str1.
Imprimir "nao", caso contr�rio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct Cell Cell;

struct Cell{
    int item; // Pode ser uma struct, union, ou quanquer tipo de dados.
              // Para possibilitar o reuso dessa c�lula para qualquer
              // tipo de informa��o, recomendo o uso de ponteiro
              // gen�rico. Exemplo: void* item;
    Cell *next;
};


// Estrutura de dados para representar uma pilha
typedef struct PilhaE{
    Cell *topo;
}PilhaE;


// Cria uma nova c�lula
Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


// Fun��o para criar uma pilha encadeada
PilhaE* criar_pilhaE(){
    PilhaE* p = (PilhaE*) malloc(sizeof(PilhaE));

    p->topo = NULL;

    return p;
}


// Retorna 1 se a pilha est� vazia ou 0, caso contr�rio
int pilhaE_vazia(PilhaE *p){
    return (p == NULL) || (p->topo == NULL);
}


// Inserir, no topo de uma pilha, um novo elemento
void empilhar(int key, PilhaE *p){
    Cell *aux; // Nova c�lula

    // Caso a pilha encadeada seja nula,
    // alocar um espa�o para essa estrutura
    if (p == NULL)
        p = criar_pilhaE();

    // Criar nova c�lula
    aux = criar_celula(key);

    // Apontar a nova c�lula para o topo da pilha
    aux->next = p->topo;

    // Atualizar topo da pilha
    p->topo = aux;
}


// Remover um item do topo da pilha
int desempilhar(PilhaE *p){
    Cell *aux; // Topo da pilha a ser removido
    int item = -INT_MAX; // Valor que est� no topo

    if (!pilhaE_vazia(p)){
        // obter a c�lula do topo da pilha
        aux = p->topo;

        // Acessar o conte�do da c�lula
        item = aux->item;

        // Atualizar o topo da pilha
        p->topo = aux->next;

        // Liberar a c�lula desempilhada
        free(aux);
    }

    return item;
}

// Imprimir conte�do da pilha
void imprimir_pilha(PilhaE *p){
    Cell *aux; // Para percorrer a pilha, deve ser utilizada
    	       // uma vari�vel auxiliar para n�o perder o
    	       // topo da pilha

    if (!pilhaE_vazia(p)){
        aux = p->topo;

        while (aux != NULL){
            printf("%d\n", aux->item);

            aux = aux->next;
        }
    }
}


int liberar_pilha(PilhaE *p){
    if (p != NULL){
        while (!pilhaE_vazia(p))
            desempilhar(p);

        free(p);

        return 1;
    }

    return 0;
}

int equi_inverso(char str1, char str2)

int main()
{
    char str1[10] = {"pao"} , str2[10] = {"oap"};

    /*scanf("%s", str1);
    scanf("%s", str2);*/

    equi_inverso(str1, str2);

}
