#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "lista.h"
#include "lista.c"

int main(void)
{
    Lista *l = criar_lista();

    inserir(l, 1);
    inserir(l, 3);
    inserir(l, 2);
    inserir(l, 4);
    inserir(l, 5);

    imprimir_lista(l);



}
