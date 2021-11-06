/* 3) Faça um programa que leia o gênero, e caso o mesmo seja
 'f', 'F', 'm' ou 'M' leia também a idade e o tempo de trabalho
de uma pessoa e determine se ela pode ou não se aposentar.
Assuma que homens se aposentam com 45 anos de trabalho ou
idade superior a 70 anos e mulheres se aposentam com 40
anos de trabalho ou idade superior a 65 anos. */

#include <stdio.h>

int main(void)
{
    int idade, trabalho;
    char gen;

    printf("Informe seu genero (usando as inicias): ");
    scanf("%c", &gen);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe o tempo trabalho: ");
    scanf("%d", &trabalho);

    if(gen == 'f' || gen == 'F')
    {
        if(idade > 65 || trabalho > 45)
        {
            printf("\nPodera se aposentar\n");
        }
        if(idade < 65 || trabalho < 45)
        {
            printf("\nNao podera se aposentar\n");
        }
    }
    if(gen == 'm' || gen == 'M')
    {
        if(idade > 70 || trabalho > 50)
        {
            printf("\nPodera se aposentar\n");
        }
        if(idade < 70 || trabalho < 50)
        {
            printf("\nNao podera se aposentar\n");
        }
    }
    return 0;
}
