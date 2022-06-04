#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    float x;
    float y;
}racionais;

void calcula(racionais a, racionais b)
{
    racionais c;

    c.x = a.x . b.x;
    c.y = a.y . b.y;

    printf(%f %f, c.x, c.y);

}

int main()
{
    racionais a;
    scanf("%f", &a.x);
    scanf("%f", &a.y);

    racionais b;
    scanf("%f", &b.x);
    scanf("%f", &b.y);

    calcula(a, b);

    return 0;
}
