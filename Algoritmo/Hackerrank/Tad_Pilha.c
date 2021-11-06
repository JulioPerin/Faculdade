#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 100

typedef struct ItemP{
    char chave;
}ItemP;

typedef struct Pilha{
    ItemP item[TAM_MAX];
    int topo;
}Pilha;


Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

int pilha_cheia(Pilha *p){

    if (p == NULL)
        return -1;
    else if (p->topo == (TAM_MAX - 1))
        return 1;
    else
        return 0;
}


int pilha_vazia(Pilha *p){

    if (p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}


int empilhar(Pilha *p, char chave){
    ItemP item;

    if (p == NULL)
        p = criar_pilha();


    if (!pilha_cheia(p)){
        item.chave = chave;

        p->topo++;

        p->item[p->topo] = item;

        return 1;
    }

    return 0;
}


ItemP* desempilhar (Pilha *p){
    ItemP *item = NULL;


    if (!pilha_vazia(p)){
        item = (ItemP*) malloc(sizeof(ItemP));

        *item = p->item[p->topo];

        p->topo--;
    }

    return item;
}

void liberar_itemP(ItemP *item){
    if (item != NULL)
        free(item);
}

void imprimir_pilha(Pilha *p){

    Pilha aux = *p;
    ItemP *item;

    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%c \n", item->chave);

        liberar_itemP(item);
    }
}


void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}



int obter_chaveP(ItemP *item){
    return item->chave;
}

int obter_posicao_topo(Pilha *p){
    if (!pilha_vazia(p))
        return p->topo;
    else
        return -1;
}

Pilha* dec_2_bin(unsigned int x)
{
    Pilha *p = criar_pilha();

    while(x != 0){
        empilhar(p, x % 2);
        x /= 2;
    }
    return p;
}

int balanco_parenteses(char string[])
{
    int i;
    Pilha *p1 = criar_pilha();

    for(i=0; i<strlen(string); i++)
    {
        if(string[i] == '(')
        {
            empilhar(p1, '(');
        }

        if(string[i] == ')' && pilha_vazia(p1) == 0)
        {
            if(string[i] == ')' && pilha_vazia(p1) == 1)
                {
                    printf("incorrect");
                    return 0;
                }
            desempilhar(p1);
        }
        else if(string[i] == ')' && pilha_vazia(p1) == 1)
        {
            printf("incorrect\n");
            return 0;
        }

    }

    if(pilha_vazia(p1) == 1)
    {
        printf("correct\n");
        return 1;
    }
    else
    {
        printf("incorrect\n");
        return 0;
    }

}

int main()
{
     /*char string[20];
     int i, a;

     scanf("%d", &a);

     for(i=0; i<=a; i++)
     {
         scanf("%s", string);
         setbuf(stdin, NULL);
         balanco_parenteses(string);
     }*/

    Pilha *p = criar_pilha(p);

    empilhar(p, 'e');
    empilhar(p, 'a');
    empilhar(p, 'b');
    empilhar(p, 'u');
    empilhar(p, 'a');
    empilhar(p, 'c');
    desempilhar(p);
    desempilhar(p);
    empilhar(p, desempilhar(p));
    desempilhar(p);
    empilhar(p, 'b');
    desempilhar(p);
    empilhar(p, (char) empilhar(p,(char)(empilhar(p,'s')-1)));

    imprimir_pilha(p);


}
