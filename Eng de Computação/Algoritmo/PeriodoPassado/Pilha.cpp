#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct{
    int item[MAXTAM];
    int topo;


}   TPilha;

void TPilha_Inicia(Tpilha *p){

    p->topo-1;
}

int TPilha_vazia(TPilha *p){
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

int TPilha_cheia(Tpilha *p)
{
    if(p->topo == MAXTAM-1)
        return 1;
    else
        return 0;
}

void TPilha_Insere(TPilha *p, int x)
{
    if(TPilha_cheia(p)==1){
        printf("ERRO: Pilha Cheia");
        }
        else{
            p->topo++;
            p->item[p->topo] = x;
        }
}

int TPilha_Retira(TPilha *p){
    int aux;
    if(TPilha_vazia(p) == 1){
        printf("Erro: Pilha Vazia");
    }
    else{
        aux = p->item[p->topo];
        p->topo--;
        return aux;
    }
}

int main(){
    Tpilha *p = (TPilha*)malloc(sizeof(TPilha))
    TPilha_Inicia(p);

    int aux;
    do{
    printf("Informe um número");
    scanf("%d", &aux);
    TPilha_Insere(p, aux);
    }while(aux<=0);

}




    return 0;
