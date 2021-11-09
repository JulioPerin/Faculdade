/* A função deverá retornar um vetor resultante da soma entre v1 e v2.

Input Format:
Na primeira linha deverão ser lidos os campos referentes ao v1 (x e y).
Na segunda linha deverão ser lidos os campos referentes ao v2.

Output Format:
Imprimir o vetor resultante da soma entre v1 e v2.*/

#include <stdio.h>
#include <math.h>


typedef struct{
    float x;
    float y;
    float norm;
}vetor_t;



float calculaNorma(vetor_t b){ //recebe struct por parametro

    float result;

    result = sqrt((b.y*b.y) + (b.x*b.x));
    //printf("Norma = %.1f\n", result);

    return(result);



}

int main(void){

   float i;

    scanf("%f", &i);

        vetor_t a;
            scanf("%f", &a.x);
            scanf("%f", &a.y);
            a.norm = calculaNorma(a);
            printf("Norma = %.1f\n", a.norm);


       vetor_t b;
            scanf("%f", &b.x);
            scanf("%f", &b.y);
            b.norm = calculaNorma(b);
            printf("Norma = %.1f\n", b.norm);














    return 0;
}
