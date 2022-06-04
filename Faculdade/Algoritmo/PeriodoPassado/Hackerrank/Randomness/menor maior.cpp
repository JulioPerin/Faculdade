#include <stdio.h>


void troca (int *a, int *b) {
     int aux;

     aux = *a;
     *a  = *b;
     *b  = aux;
}

int main() {
    int a, b, i;

    scanf("%d", &i);


    while (i > 0)
    {
        scanf("%d %d", &a, &b);
        troca(&a, &b);
        i--;
        printf("A=%d B=%d\n", *a, b);
    }


    return 0;
}
