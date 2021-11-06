//calcular cirfunferencia de circulo
#include <stdio.h>

int main(void)
{
    int raio;
    float circunferencia;

    printf("Informe o raio do circulo: ");
    scanf("%d", &raio);

    circunferencia = 2 * 3.14 * (float)raio;

    printf("A circunferencia %c: %f", 130, circunferencia);

    return 0;
}
