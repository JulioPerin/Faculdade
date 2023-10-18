/*
Implemente uma fun��o que receba um ponteiro do tipo esfera e uma vari�vel est�tica do tipo float que
represente um valor de raio. A partir da var�vel do tipo float, os campos das estrutura devem ser atualizados.

Input format:
Na primeira linha da entrada deve ser lido um �nico float correspondente ao raio.

Output Format:
Em cada linha deve ser impresso, considerando uma casa decimal, um campo da esfera na seguinte sequ�ncia: raio, �rea, volume e di�metro.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    float raio, area, volume, diametro;
}esfera;

void atualizar_esfera(esfera *e, float r)
{

    e->area = 4 * 3.14 * (r*r);
    e->volume = 0.75 * 3.14 * (r*r*r);
    e->diametro = 2 * r;
    e->raio = r;
    printf("raio: %.1f\narea: %.1f\nvolume: %.1f\ndiametro: %.1f", e->raio, e->area, e->volume, e->diametro);

}

int main(void) {

    float r;
    esfera e;


    scanf("%f", &r);
    atualizar_esfera(&e, r);


    return 0;
}
