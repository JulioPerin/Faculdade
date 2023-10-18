/*
6) Ler dois números que representam os limites de um intervalo e ler o incremento.
Mostrar os números desse intervalo de acordo com o incremento indicado e em ordem
crescente. O usuário pode informar os valores que representam os limites do intervalo
em ordem crescente ou decrescente. Fazer a média dos ímpares e divisíveis por 35 do intervalo.
*/

#include <stdio.h>

int main(void)
{
    int superior, inferior, i, inc, cont=0, soma=0;
    float media;

    printf("Informe o limite superior: ");
    scanf("%d", &superior);
    printf("Informe o limite inferior: ");
    scanf("%d", &inferior);
    printf("Informe o incremento positivo: ");
    scanf("%d", &inc);

    printf("Valores dentro do intervalo =");

    if(inferior > superior)
    {
        i = inferior;
        inferior = superior;
        superior = i;

    }
        for(i = inferior; i <= superior; i=i+inc)
        {
            printf("\n|  %d   |", i);

            if(i%2 == 1 && i%35 == 0)
            {
                cont++;
                soma = soma + i;
                printf("Impar e divisivel por 35");
            }

        }
        if(cont > 0)
        {
            media = (float)soma / cont;
            printf("\nA media dos impares divisiveis por 35: %.2f", media);
        }
        else
        {
            printf("\nNao existe nenhum impar divisivel por 35");
        }
        return 0;
}

