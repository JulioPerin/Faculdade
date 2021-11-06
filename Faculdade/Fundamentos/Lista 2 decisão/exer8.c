/* interpretar o fluxograma */

#include <stdio.h>

int main(void)
{
    float base, grat, liq, bruto, ir;

    printf("Informe o salario base:\n");
    scanf("%f", &base);
    printf("Informe a gratificacao:\n");
    scanf("%f", &grat);

    bruto = grat + base;

    if(bruto < 1000)
    {
        ir = bruto * 0.2;
        liq = bruto - ir;
        printf("O salario liquido eh: %.2f", liq);
    }
    else if(bruto >= 1000)
    {
        ir = bruto * 0.15;
        liq = bruto - ir;
        printf("O salario liquido eh: %.2f", liq);
    }
return 0;

}
