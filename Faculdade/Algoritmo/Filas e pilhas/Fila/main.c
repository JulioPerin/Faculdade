#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "fila.c"

int main()
{

    Fila *f = criar_fila();

    enfileirar(f, 1);
    enfileirar(f, 2);
    enfileirar(f, 3);
    enfileirar(f, 4);
    enfileirar(f, 5);
    enfileirar(f, 6);

    imprimir_fila(f);

    liberar_itemF(desenfileirar(f));






}
