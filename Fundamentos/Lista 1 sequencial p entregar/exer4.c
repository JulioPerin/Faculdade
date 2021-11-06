//media ponderada

#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota:  ");
    scanf("%f", &nota1);
    printf("Informe a terceira nota:");
    scanf("%f", &nota2);
    printf("Informe a terceira nota:");
    scanf("%f", &nota3);

    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;

    printf("Sua media final %c: %f", 130, media);

    return 0;
}
