// turma 3 alunos e 5 notas
#include <stdio.h>

int main(void)
{
    float matriz[3][5];
    int i, j;

    for(i=0; i<3; i++) // add notas alunos
    {
        for(j=0; j<5; j++)
        {
            printf("Informe a nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("====MATRIZ DAS NOTAS====\n");
    printf("ALUNOS\tNOTAS\n");

    for(i=0; i<3; i++) //imprime as notas
    {
        printf("%d\t", i+1);
        for(j=0; j<5; j++)
        {
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }

}
