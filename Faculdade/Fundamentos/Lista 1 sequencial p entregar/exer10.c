//varias operações juntas

#include<stdio.h>

int main(void)
{
    float x, y;



    printf("Informe um numero: ");
    scanf("%f", &x);
    printf("Informe outro numero: ");
    scanf("%f", &y);

    printf("\na) %f", (((float)x + y) / y) * (x * x));
    printf("\nb) %f", (x + y) / (x - y));
    printf("\nc) %f", ((x * x) + ( y * y * y)) / 2);
    printf("\nd) %f", ((x * x * x) / (y * y)));
    printf("\nf) %d", ((int)x % (int)y));
    printf("\nf) %d", ((int)x % 3));
    printf("\nf) %d", ((int) % 5));

    return 0;
}
