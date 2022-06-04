 #include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#define TAM_MAX 100



typedef struct{
    int item[TAM_MAX];
    int topo;
}Pilha;

// Criar uma pilha vazia
Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

// Verificar se a pilha esta cheia (stack overflow)
int pilha_cheia(Pilha *p){
    // Uma solucao simples
    // Antes de verificar o topo da pilha, primeiro devemos verificar se
    // a pilha e nula
    //return (p != NULL) && p->topo == (TAM_MAX - 1);

    //outra alternativa para implementacao dessa funcao para retornar
    //-1: se a pilha for nula
    // 0: se a pilha nao estiver cheia
    // 1: se a pilha estiver cheia
    if (p == NULL)
        return -1;
    else if (p->topo == (TAM_MAX - 1))
        return 1;
    else
        return 0;
}

// Verificar se a pilha esta vazia (stack overflow)
int pilha_vazia(Pilha *p){
    // Uma solucao simples
    // Pilha nula ou com o topo igual a -1 e uma pilha vazia
    //return (p == NULL) || (p->topo == -1);

    //outra alternativa para implementacao dessa funcao para retornar
    //-1: se a pilha for nula
    // 0: se a pilha nao estiver vazia
    // 1: se a pilha estiver vazia
    if (p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}

// Inserir um novo item na pilha, caso houver espaco
int empilhar(Pilha *p, int item){
    // Se a pilha for nula, reservar um espaco na memoria para ela
    if (p == NULL)
        p = criar_pilha();

    // Se a pilha nao estiver cheia, empilhar um item
    // ! => operacao logica de negacao
    // Exemplos:
    // !0 = 1
    // !(numero diferente de 0) = 0
    // Caso a pilha seja nula, antes de entrar no comando if, ela e criada
    // ou seja, nao precisa fazer "if (pilha_cheia(p) == 0)"
    if (!pilha_cheia(p)){
        p->topo++; // a pilha aumenta

        p->item[p->topo] = item; // um novo item e empilhado

        return 1; // operacao bem sucedida
    }

    return 0; // opera
}

// Remover item do topo da pilha, caso essa estrutura nao estiver vazia
int desempilhar (Pilha *p){
    int item = INT_MIN;

    // Verificar se a pilha e vazia (1) ou nula (-1)
    // A unica condicao para "entrar" no comando if e a funcao abaixo
    // retornar 0, cuja negacao e 1
    // Para qualquer retorno diferente de 0, a negacao sera 0
    if (!pilha_vazia(p)){
        item = p->item[p->topo];

        p->topo--;
    }

    return item;
}

// Imprimir conteudo da pilha
void imprimir_pilha(Pilha *p){
    // Uma copia da pilha deve ser feita, pois podemos ter acesso
    // aos elementos apenas pela operacao desempilhar, ou seja,
    // se usarmos a pilha original (p), perderiamos os seus dados
    Pilha aux = *p;
    int item;

    // Como a variavel aux nao e ponteiro, para utilizamos o seu
    // endereco como parametro para chamarmos a funcao pilha_vazia
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%d", item);
    }
}

// Liberar a pilha
void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}


// Obter a posicao da pilha em que esta o topo
int obter_posicao_topo(Pilha *p){
    if (!pilha_vazia(p))
        return p->topo;
    else
        return -1;
}

Pilha* binario(int a)
{
    Pilha *p = criar_pilha();

    while(a != 0)
    {
        empilhar(p, a%2);
        a /= 2;
    }

    return p;
}

int conta(int a, int b, int c)
{
    switch (c)
    {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
        default: return 0;
    }

}


int posfixo(char s[])
{
    int a, b, aux, i, tam = strlen(s);
    Pilha *p1 = criar_pilha();

    for(i=0; i<tam; i++)
    {
        if((s[i] >= '0') && (s[i] <='9'))
        {
            empilhar(p1, ((int)s[i]) - 48);
        }
        else if((s[i] == '+') || (s[i] == '-') || (s[i] == '*') || (s[i] == '/'))
        {
            a = desempilhar(p1);
            b = desempilhar(p1);

            aux = conta(b, a,  s[i]);

            empilhar(p1, aux);
        }

    }

    aux = desempilhar(p1);

    liberar_pilha(p1);

    return aux;

}

int main()
{
     char s[20];
     int aux;

    scanf("%s", s);
    aux = posfixo(s);

    printf("%d", aux);


    return 0;
}
