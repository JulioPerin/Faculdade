#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int d, m, a;
}data;

typedef struct{
    char nome[50];
    int RA;
    float coef;
    data data_nasc;

}aluno;

//typedef struct dragonball dbz;
//typedef struct aluno aluno;

/*aluno criar_cadastro(char nome[]m int RA, float coef){

aluno a;

strcpy(a.nome, nome);
a.RA = RA;
a.coef = coef;

return a;
}*/




int main(void)
{

    aluno e;

    e.data_nasc.d = 28;
    e.data_nasc.m = 05;
    e.data_nasc.a = 1998;

    printf("Dia: %d -- Mes: %d -- Ano %d\n\n", e.data_nasc.d, e.data_nasc.m, e.data_nasc.a);


  /*  for(i=0; i<1; i++)
    {
        printf("\nNome: ");
        scanf("%[^\n]s", &)
        printf("\nNível: ");
        scanf("%d")
    }*/



}
