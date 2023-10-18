#include <stdio.h>
#include <math.h>


typedef struct{
    float x;
    float y;

}vetor_r2;

void somaVetor(vetor_r2 v1, vetor_r2 v2)
{
    float a, b;

    a = v1.x + v2.x;
    b = v1.y + v2.y;

    printf("%.0f %.0f", a, b);


}

int main(void){

        vetor_r2 v1;
            scanf("%f", &v1.x);
            scanf("%f", &v1.y);

       vetor_r2 v2;
            scanf("%f", &v2.x);
            scanf("%f", &v2.y);


       somaVetor(v1, v2);



    return 0;
}
