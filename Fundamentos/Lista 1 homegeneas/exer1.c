/*1) Ler 10 números inteiros e armazenar em um vetor. Validar as entradas para que sejam informados valores positivos. Em listagens separadas: */

#include <stdio.h>

int main(void)
{
    int i, contpar=0, cont5e3=0, cont10e100=0, contimpar=0, cont10ou100=0;
    int vetor[10]= {112, 10, 5, 35, 135, 76, 85, 90, 45, 33};

    /*for(i=0; i<10; i++)
    {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &vetor[i]);
    }*/

    printf("===PARES===\n");
    for(i=0; i<10; i++)
    {
        if(vetor[i]%2 == 0)
        {
            printf("%d ", vetor[i]);
            contpar++;
        }
    }
    printf("\nExistem %d numeros pares nesse vetor\n\n", contpar);


    printf("===DIVISIVEIS POR 3 E POR 5===\n");
    for(i=0; i<10; i++)
    {
        if(vetor[i]%3 == 0 && vetor[i]%5 == 0)
        {
            printf("%d ", vetor[i]);
            cont5e3++;
        }
    }
    printf("\nExistem %d numeros divisiveis por 3 e por 5 nesse vetor\n\n", cont5e3);

    printf("===MAIORES QUE 10 ou MENORES QUE 100\n");
    for(i=0; i<10; i++)
    {
        if(vetor[i]>10 || vetor[i]<100)
        {
            printf("%d ", vetor[i]);
            cont10e100++;
        }
    }

    printf("\nExistem %d numeros maiores que 10 ou menores que 100  nesse vetor===\n\n", cont10e100);

    printf("===MAIORES QUE 10 E MENORES QUE 100\n");
    for(i=0; i<10; i++)
    {
        if(vetor[i]>10 && vetor[i]<100)
        {
            printf("%d ", vetor[i]);
            cont10ou100++;
        }
    }

    printf("\nExistem %d numeros maiores que 10 e menores que 100  nesse vetor===\n\n", cont10e100);

    printf("===IMPARES===\n");
    for(i=0; i<10; i++)
    {
        if(vetor[i]%2 == 0)
        {
            printf("%d ", vetor[i]);
            contimpar++;
        }
    }
    printf("\nExistem %d numeros pares nesse vetor representando %d.00%% dos elementos do vetor\n\n", contimpar, (contimpar * 10));












return 0;
}
