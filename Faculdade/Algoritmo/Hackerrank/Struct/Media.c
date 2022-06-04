#include <stdio.h>
#include <math.h>

typedef struct
{
    int cod;
    char nome[255];
    float notas[3];
    float media;
} aluno_t;


float calculaMedia(aluno_t aluno)
{
    return ((aluno.notas[0] + aluno.notas[1] + aluno.notas[2]) / 3);
}



void encontraMaiorMedia(aluno_t aluno[], int n)
{
    int i, pos=0;
    float j=0, aux;



    for(i=0; i<n; i++)
    {
        aux = aluno[i].media;
        if(aux > j)
        {
            j = aux;
            pos = i;
        }
    }

    printf("O aluno com maior media e: %d %s %.1f\n", aluno[pos].cod, aluno[pos].nome, j);

}


void encontraMenorMedia(aluno_t aluno[], int n)
{

    int i, pos=0;
    float j=aluno[0].media, aux;

    for(i=0; i<n; i++)
    {
        aux = aluno[i].media;
        if(aux < j)
        {
            j = aux;
            pos = i;
        }

    }

    printf("O aluno com menor media e: %d %s %.1f\n", aluno[pos].cod, aluno[pos].nome, j);

}

void encontraMaiorP1(aluno_t aluno[], int n)
{

    int i, pos=0;
    float j=aluno[0].notas[0], aux;

    for(i=0; i<n; i++)
    {
        aux = aluno[i].notas[0];
        if(aux > j)
        {
            j = aux;
            pos = i;
        }

    }

    printf("O aluno com maior P1 e: %d %s %.1f\n", aluno[pos].cod, aluno[pos].nome, j);

}

int main()
{

    int x, i;

    scanf("%d", &x);

    aluno_t aluno[x];

    for(i=0; i<x; i++)
    {
        scanf("%d", &aluno[i].cod);
        scanf("%s", aluno[i].nome);
        scanf("%f %f %f", &aluno[i].notas[0], &aluno[i].notas[1], &aluno[i].notas[2]);
        aluno[i].media = calculaMedia(aluno[i]);

        if(aluno[i].media >= 6.0)
        {
            printf("Aprovado!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }

    encontraMaiorMedia(aluno, x);
    encontraMenorMedia(aluno, x);
    encontraMaiorP1(aluno, x);


    return 0;
}
