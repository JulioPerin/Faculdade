#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    float x, y;
}retangulo;

retangulo* soma(retangulo *r1, retangulo *r2){
    retangulo aux;
    retangulo *p_aux = &aux;

    p_aux->x = r1->x + r2->x;
    p_aux->y = r1->y + r2->y;


}

int main(void)
{


}



/*typedef struct{
    char nome[101];
    int *RA;
    float coef;

}Aluno;

int main(void) {

    Aluno v;
    Aluno *p;
    int x;

    p = &v;

    v.RA = &x;
    x=10;


    printf("%d\n", p->RA);

    /*(*p).coef = 0.7;
    (*p).RA = 345;
    strcpy((*p).nome, "Gil Brother");*/

   /* printf("%s\n", (*p).nome);
    printf("%d\n". (*p).RA);
    printf("%.2f\n". (*p).coef);*/

    /* printf("%s\n", p->nome);
    printf("%d\n". p->RA);
    printf("%.2f\n". p->coef);*/


