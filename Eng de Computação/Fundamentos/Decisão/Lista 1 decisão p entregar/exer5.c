/*5) Elaborar um programa que, dada a idade de um nadador, classifique-o */

#include <stdio.h>

int main(void)
{
    int idade;

    printf("Informe uma idade: ");
    scanf("%d", &idade);

    if(idade < 5 && idade > 0)
    {
        printf("\nNao classificado como atleta");
    }
    if(idade >= 5 && idade <= 7)
    {
        printf("\nClassificado como=Infantil A");
    }
    if(idade >= 8 && idade <= 10)
    {
        printf("\nClassificado como=Infantil B");
    }
    if(idade >= 11 && idade <= 13)
    {
        printf("\nClassificado como=Juvenil A");
    }
    if(idade >= 14 && idade <= 17)
    {
        printf("\nClassificado como=Juvenil B");
    }
    if(idade > 17)
    {
        printf("\nClassificado como=Senior");
    }
    if(idade <= 0)
    {
        printf("\nInvalido");
    }
    return 0;
}
