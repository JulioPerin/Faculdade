// conversor celsius -> farenheit
#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Informe a temperatura em celsius: ");
    scanf("%f", &c);

    printf("Farenheit= %f", (1.8 * c ) + 32);

    return 0;
}
