/*
Implemente uma funcao que receba dois vetores de numeros inteiros.
A funcao devera retornar um vetor resultante da soma dos vetores entrada.


Input Format:
Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v.
Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor.

Output Format:
Vetor resultante da soma dos vetores de entrada.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* soma(int *v1, int n1, int *v2, int n2)
{
    int i, aux, *v3;

    if(n1 <= n2)
    {
        v3 = (int*)malloc(n2 * sizeof(int));
        aux = n1;

        for(i=0; i<n2; i++)
        {
            if(i<aux)
            {
                v3[i] = v2[i] + v1[i];
            }
            else
            {
                v3[i] = v2[i];
            }
        }

        for(i=0; i<n1; i++)
        {
            printf("%d ", v3[i]);
        }
        free(v3);
    }
    else if(n1 > n2)
    {
        v3 = (int*)malloc(n2 * sizeof(int));
        aux = n2;
        for(i=0; i<n1; i++)
        {
            if(i<aux)
            {
                v3[i] = v2[i] + v1[i];
            }
            else
            {
                v3[i] = v1[i];
            }
        }

        for(i=0; i<n1; i++)
        {
            printf("%d ", v3[i]);
        }
        free(v3);
    }

    return 0;

}

int main() {

    int n1, n2, i;

    scanf("%d", &n1);

    int v1[n1];

    for(i=0; i<n1; i++)
    {
        scanf("%d", &v1[i]);

    }

    scanf("%d", &n2);

    int v2[n2];
    for(i=0; i<n2; i++)
    {
        scanf("%d", &v2[i]);

    }

    soma(v1, n1, v2, n2);



    return 0;
}
