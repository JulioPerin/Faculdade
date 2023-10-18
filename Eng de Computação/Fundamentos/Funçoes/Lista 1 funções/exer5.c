#include <stdio.h>

void desenho(int linhas, int colunas, char caract)
{
    int i, j;

    for(i=1; i<=linhas; i++)
    {
        for(j=1; j<=colunas; j++)
        {
            printf("%c  ", caract);
        }
        printf("\n");
    }
}

int main(void)
{
    int linhas, colunas;
    char caract;

    printf("Informe o numero de linhas ");
    scanf("%d", &linhas);
    printf("Informe o numero de colunas: ");
    scanf("%d", &colunas);
    printf("Informe o caractere: ");
    setbuf(stdin, NULL);
    scanf("%c", &caract);

    desenho(linhas, colunas, caract);

}
