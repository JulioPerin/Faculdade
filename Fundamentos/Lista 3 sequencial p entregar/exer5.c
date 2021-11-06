/*Ler um número inteiro com até 3 dígitos.
 Separar os dígitos desse número e mostrá-los
em linhas distintas. Na sequência calcular e
mostrar o inverso do número. */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float num, cent, dez, uni, cent1, dez1, uni1, soma;

    printf("Informe um numero inteiro com ate 3 digitos: ");
    scanf("%f", &num);

    cent = num / 1000;
    dez = num / 100;
    uni = num / 10;

    cent1 = (cent - (int)cent) * 10;
    dez1 = (dez - (int)dez) * 10;
    uni1 = (uni - (int)uni) * 10;

    if(cent1 == 1)
    {
        soma = ((int)uni1 * 100) + ((int)dez1 * 10) + 1;
    }else;

    {
        soma = ((int)uni1 * 100) + ((int)dez1 * 10) + (int)cent1;
    }



    printf("\nO 1 digito eh= %.0f", cent1);
    printf("\nO 2 digito eh= %.0f", dez1);
    printf("\nO 3 digito eh= %.0f", uni1);
    printf("\nO inverso do numero eh=%.0f", soma);
}
