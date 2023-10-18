/*
5) Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido.
Imprimir a soma dos pares, o produto dos ímpares que são divisíveis por 9 e a
média de todos os números do intervalo.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main (void)
{
    int num, i, somaPar=0, produto=1, cont=0, contTodos=0, somaTodos=0;
    float media;

    do
    {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &num);

        if(num <= 2)
        {
            printf("Valor invalido\n");
        }
    }
    while(num <= 2);

    for(i=2; i<=num; i++)
    {
        contTodos++;
        somaTodos = somaTodos + i;
        if(i % 2 == 0)
        {
            printf("%d\n", i);
            somaPar = somaPar + i;
        }
        else
        {
            if(i % 9 == 0)
            {
                cont++;
                produto = produto * i;
            }
        }
    }
    printf("Soma dos pares: %d\n", somaPar);
   if(cont > 0)
    {
    printf("Produto dos impares diviseis por 9: %d\n", produto);
    }
    else
    {
       printf("Nao existe nenhum divisivel por 9")  ;
    }

    media = (float)somaTodos / contTodos;
    printf("Media de todos os numeros eh: %.2f", media);
}
