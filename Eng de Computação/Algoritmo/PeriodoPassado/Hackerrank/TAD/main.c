#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "vetor.h"

int main(void){

    Vetor *v = iniciar_vetor(10);

    inserir_ultimo(v, 1);
    inserir_ultimo(v, 2);
    inserir_ultimo(v, 3);
    inserir_ultimo(v, 4);
    inserir_ultimo(v, 5);

    imprimir_vetor(v);
}
