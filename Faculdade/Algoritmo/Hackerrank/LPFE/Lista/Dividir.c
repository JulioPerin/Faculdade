#include <stdio.h>
#include <stdlib.h>


// Estrutura para representar celulas
typedef struct Cell Cell;
typedef struct ListaE ListaE;

struct Cell{
    int item; // Pode ser uma struct, union, ou qualquer tipo de dados.
              // Para possibilitar o reuso dessa celula para qualquer
              // tipo de informacao, recomendo o uso de ponteiro
              // generico. Exemplo: void* item;
    Cell *next;
};


// Estrutura para representar listas encadeadas
struct ListaE{
    Cell *head; // Ponteiro para o primeiro elemento da lista
};


// Cria uma nova celula
Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


// Funcao para criar uma lista encadeada
ListaE* criar_listaE(){
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));

    l->head = NULL;

    return l;
}


// Retorna 1 se a lista esta vazia ou 0, caso contrario
int listaE_vazia(ListaE *l){
    return (l == NULL) || (l->head == NULL);
}


// Verifica se um item existe na lista
int procurar(int key, ListaE *l){
    Cell *aux; // Para percorrer a lista, deve ser utilizada
               // uma variavel auxiliar para nao perder a
               // cabeca da lista

    if (l != NULL){
        aux = l->head;

    // Percorrer a lista encadeada: enquanto a chave nao
    // for encotrada e o valor nulo (NULL) nao for
    // alcancado, percorrer cada celula
        while (aux != NULL){
            if (aux->item == key)
                return 1;

            aux = aux->next;
        }
    }

    return 0;
}


// Um item e inserido no inicio da lista
void inserir_primeiro(int key, ListaE *l){
    Cell *aux; // Nova celula

    // Caso a lista encadeada seja nula,
    // alocar um espaco para essa estrutura
    if (l == NULL)
        l = criar_listaE();

    // Criar nova celula
    aux = criar_celula(key);

    // Apontar a nova celula para a cabeca da
    // lista
    aux->next = l->head;

    // Atualizar a cabeca da lista
    l->head = aux;
}


// Um item e inserido no final da lista
void inserir_ultimo(int key, ListaE *l){
    Cell *aux, *novo; // celula auxiliar e nova,
                      // respectivamente

    // Caso a lista encadeada seja nula,
    // alocar um espaco para essa estrutura
    if (l == NULL)
        l = criar_listaE();

    // Se a lista estiver vazia, nao faz sentido
    // percorre-la
    if (listaE_vazia(l))
        inserir_primeiro(key, l);
    else{
        aux = l->head;

    // Percorrer a lista ate encontrar a ultima
    // celula
        while(aux->next != NULL)
            aux = aux->next;

        // Criar nova celula
        novo = criar_celula(key);

    // O ultimo elemento da lista aponta para a
    // nova celula
        aux->next = novo;
    }
}


/* O item procurado e removido da lista caso ela. Para isso,
 a lista nao deve estar vazia e o item deve existir.
 A funcao retorna 1 se a operacao for bem sucedida ou 0,
 caso contrario*/
int remover(int key, ListaE *l){
    Cell *auxA, *auxP = NULL; // celulas auxiliares

    if (!listaE_vazia(l)){
        auxA = l->head; // apontar o auxA para a cabeca da lista

        // Verificar se o elemento esta na cabeca da lista
        if(auxA->item == key){
            // Atualizar a cabeca
            l->head = l->head->next;
        }else{
            // apontar auxP para auxA
            auxP = auxA;

            // Procurar a celula que deve ser removida
            while((auxA != NULL) && (auxA->item != key)){
                //if (auxP != NULL)
                    auxP = auxA; // Guardar o endereco auxA

                auxA = auxA->next; // Atualizar auxA
            }
        }

        if (auxA != NULL){
            // Caso a chave seja encontrada, ou seja, auxA diferente de
            // nulo, fazer a celula predecessora (auxP) apontar o ponteiro
            // "next" para o proximo elemento de auxA
            if (auxP != NULL)
                auxP->next = auxA->next; // funciona mesmo se auxP for igual a auxA

            // Agora, a celula auxA pode ser removida com seguranca
            free(auxA);

            return 1; // Operacao bem-sucedida
        }

    }

    return 0;
}


// Imprimir o conteudo da lista
void imprimir(ListaE *l){
    Cell *aux; // Para percorrer a lista, deve ser utilizada
               // uma variavel auxiliar para nao perder a
               // cabeca da lista


    if (!listaE_vazia(l)){
        aux = l->head;

        while (aux != NULL){
            printf("%d ", aux->item);

            aux = aux->next;
        }

        printf("\n");
    }
}

// Liberar lista
// Retorna 1 se a operacao for bem-sucedida ou 0, caso contrario
int liberar_LE(ListaE *l){
    Cell *aux = NULL; // Para percorrer a lista, deve ser utilizada
               // uma variavel auxiliar para nao perder a
               // cabeca da lista

    // Diferentemente de uma lista estatica, que pode ser ter todos
    // seus elementos desalocados de uma vez, em uma lista encadeada,
    // primeiramente deve ser desolocada celula por celula
    if (l != NULL){
        while(l->head != NULL){
            aux = l->head;

            l->head = aux->next;

            free(aux);
        }

        free(l);

        return 1;
    }

    return 0;
}

int tamanho_LE(ListaE *l){
    Cell *aux;
    int tam = 0;

     if (!listaE_vazia(l)){
        aux = l->head;

        while(aux != NULL){
            aux = aux->next;

            tam++;
        }
    }

    return tam;
}

int remover_ini(ListaE *l)
{
    int removido;

    if (!listaE_vazia(l)){

        if(l->head != NULL)
        {
            removido = l->head->item;
            l->head = l->head->next;
        }
        return removido;
    }
}

void dividir2(ListaE *l)
{

    ListaE *l1 = criar_listaE();
    ListaE *l2 = criar_listaE();
    int i=0, removido;

    if(!listaE_vazia(l))
    {
        int tam = tamanho_LE(l);

        if(tam%2 == 1)
        {
            tam++;
        }

         for(i=0; i<tam/2; i++)
         {

                removido = remover_ini(l);
                inserir_ultimo(removido, l1);
         }

        for(i=0; i<tam && l->head != NULL; i++)
         {

                removido = remover_ini(l);
                inserir_ultimo(removido, l2);

         }


         imprimir(l1);
         imprimir(l2);

    }
}

int main()
{
    ListaE *l = criar_listaE();

    int a;

    do
    {
        scanf("%d", &a);
        if(a!=-1)
        {
          inserir_ultimo(a, l);
        }
    }while(a!=-1);

    dividir2(l);

}


