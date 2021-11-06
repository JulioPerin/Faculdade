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
