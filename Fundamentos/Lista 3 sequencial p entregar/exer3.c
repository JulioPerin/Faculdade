/*Ler um número inteiro com até 4 dígitos.
 Separar os dígitos desse número e mostrá-los em linhas distintas */

 #include <stdio.h>

 int main(void)
{
    float num, mil, cent, dez, uni, cent1, dez1, uni1;

    printf("Informe um numero de ate 4 digitos: ");
    scanf("%f", &num);

    mil = num / 1000;
    cent = num / 1000;
    dez = num / 100;
    uni = num / 10;

    cent1 = (cent - (int)cent) * 10;
    dez1 = (dez - (int)dez) * 10;
    uni1 = (uni - (int)uni) * 10;

    printf("\nO 1 digito eh= %.0f", mil);
    printf("\nO 2 digito eh= %.0f", cent1);
    printf("\nO 3 digito eh= %.0f", dez1);
    printf("\nO 4 digito eh= %.0f", uni1);

    return 0;





}
