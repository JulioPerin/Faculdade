#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include "Pilha.c"

int main()
{
    Pilha *p = criar_pilha(p);

    empilhar(p, 1);
    empilhar(p, 2);
    empilhar(p, 3);
    empilhar(p, 4);
    empilhar(p, 5);
    empilhar(p, 6);
    empilhar(p, desempilhar(p));

    imprimir_pilha(p);


}
