// turma 3 alunos e 5 notas
#include <stdio.h>

int main(void)
{
    float matriz[2][3][5];
    int i, j, k;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++) // add notas alunos
        {
            for(k=0; k<5; k++)
            {
                printf("Informe a nota %d do aluno %d da turma %d: ", k+1, j+1, i+1);
                scanf("%f", &matriz[i][j][k]);
            }
        }
    }

    printf("====MATRIZ DAS NOTAS====\n");
    ;


   for(i=0; i<2; i++)
    {
        printf("TURMA %d\nALUNOS\tNOTAS\n", i+1);
        for(j=0; j<3; j++) //imprime as notas
        {
            printf("%d\t", j+1);
            for(k=0; k<5; k++)
            {
                printf("%.1f\t", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
