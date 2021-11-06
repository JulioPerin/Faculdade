/* Ler um número que representa a quantidade de dias. Informe os anos, meses e dias */

#include <stdio.h>

int main(void)
{
    float dias, meses, anos, diasinput;

    printf("Informe a quantidade de dias: ");
    scanf("%f", &diasinput);

    anos = diasinput / 360;
    meses = (diasinput - ((int)anos * 360)) / 30;
    dias = (int)diasinput % 30;

    printf("\nTotal de=%.0f ano(s), %.0f meses e %.0f dias", anos, meses, dias);

    return 0;
}
