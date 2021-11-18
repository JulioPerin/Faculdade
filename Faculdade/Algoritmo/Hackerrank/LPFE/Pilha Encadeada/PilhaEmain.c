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
Imprimir "nao", caso contrario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

typedef struct Cell Cell;

struct Cell{
    char item;
    Cell *next;
};

typedef struct PilhaE{
    Cell *topo;
}PilhaE;

Cell* criar_celula(char key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}

PilhaE* criar_pilhaE(){
    PilhaE* p = (PilhaE*) malloc(sizeof(PilhaE));

    p->topo = NULL;

    return p;
}

int pilhaE_vazia(PilhaE *p){
    return (p == NULL) || (p->topo == NULL);
}

void empilhar(char key, PilhaE *p){
    Cell *aux;

    if (p == NULL)
        p = criar_pilhaE();

    aux = criar_celula(key);

    aux->next = p->topo;

    p->topo = aux;
}

int desempilhar(PilhaE *p){
    Cell *aux;
    int item = -INT_MAX;

    if (!pilhaE_vazia(p)){

        aux = p->topo;


        item = aux->item;

        p->topo = aux->next;

        free(aux);
    }

    return item;
}


void imprimir_pilha(PilhaE *p){
    Cell *aux;

    if (!pilhaE_vazia(p)){
        aux = p->topo;

        while (aux != NULL){
            printf("%c\n", aux->item);

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

char topo_pilha(PilhaE *p){
    Cell *aux;

    aux = p->topo;

    return aux->item;
}

int equi_inverso(char *str1, char *str2)
{
    int i;
    PilhaE *p = criar_pilhaE();

    if(strlen(str1) == strlen(str2))
    {
            for(i=0; i<strlen(str1); i++)
            {
                    empilhar(str1[i], p);
            }

            for(i=0; i<strlen(str2); i++)
            {
                if(topo_pilha(p) == str2[i])
                {
                    desempilhar(p);
                }
            }
    }
    else
    {
        printf("nao");
        return 0;
    }

    if(!pilhaE_vazia(p))
    {
        printf("nao");
        return 0;
    }
     else
    {
        printf("sim");
        return 1;
    }
}

int main()
{
    char str1[10], str2[10];

    scanf("%s", str1);
    scanf("%s", str2);

    equi_inverso(str1, str2);

    return 0;
}
