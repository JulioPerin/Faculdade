/*Ler um número inteiro com até 5 dígitos.
 Separar os dígitos desse número e mostrá-los em linhas distintas e apos soma-los */

 #include <stdio.h>

 int main(void)
{
    float num,dezmil, mil, cent, dez, uni, mil1, cent1, dez1, uni1, soma;

    printf("Informe um numero de ate 5 digitos: ");
    scanf("%f", &num);

    dezmil = num / 10000;
    mil = num / 10000;
    cent = num / 1000;
    dez = num / 100;
    uni = num / 10;

    mil1 = (mil - (int)mil) * 10;
    cent1 = (cent - (int)cent) * 10;
    dez1 = (dez - (int)dez) * 10;
    uni1 = (uni - (int)uni) * 10;

    soma = (int)dezmil + (int)mil1 + (int)cent1 + (int)dez1 + (int)uni1;

    printf("\nO 1 digito eh= %.0f", dezmil);
    printf("\nO 2 digito eh= %.0f", mil1);
    printf("\nO 3 digito eh= %.0f", cent1);
    printf("\nO 4 digito eh= %.0f", dez1);
    printf("\nO 5 digito eh= %.0f", uni1);
    printf("\nA soma de todos os digitos eh=%.0f", soma);

    return 0;
}


