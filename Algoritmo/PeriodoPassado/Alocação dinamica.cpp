#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*int main() {

    int *p, n = 10, i;
    int *v;

    p = (int*)malloc(sizeof(int));
    v = (int*)malloc(sizeof(int) * n);

    if(p != NULL){
        *p = 5;
    }


    if(v != NULL)
    {
        for(i=0; i<n; i++)
        {
            v[i] = i * 2;
            printf("%d\n", v[i]);
        }
    }

    return 0;
}*/

/*int main(void)
{
    int *p, *v, n=10, i;

    p = (int*)calloc(1, sizeof(int));
    v = (int*)calloc(n, sizeof(int) * n);

    if(p != NULL){
        *p = 5;
    }


    if(v != NULL)
    {
        for(i=0; i<n; i++)
        {
            v[i] = i * 2;
            printf("%d\n", v[i]);
        }
    }
}*/

/*int main(void)
{
    char *s;

    //armazena 12 caracteres e \0
    s = (char*)malloc(13* sizeof(char));

    //cloca a frase na string
    strcpy(s, "kame hame ha");

    //realoca o espaço para mais um caractere
    s = (char*)realloc(s, 14 * sizeof(char));

    //adicionando o ponto de exclamação a string
    strcat(s, "!");

    printf("%s", s);

    free(s);
}*/

/*int* func(int *v){
    int *p = (int*)malloc(sizeof(int));

    p[0] = v[0] * v[0];
    p[1] = v[1] * v[1];

}


int main(void)
{
    int v[] = {2, 4};
    int *p = func(v);

    printf("%d %d \n", p[0], p[1]);

    return 0;
}*/

/*typedef struct{
    int n;
    int *item;
}Vetor;

Vetor *iniciar_vetor()
{
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));

    v->n = n;

    v->item = (int*)malloc(sizeof(int) * n);

    return v;
}

int main(){




}*/

int** create_matrix(int l, int c){
	int i;
	int** mat;

	mat = (int**) malloc(sizeof(int*) * l);

	for (i = 0; i < l; i++)
        mat[i] = (int*) malloc(sizeof(int) * c);

	return mat;
}


int main(void){
	int i, j;
	int n = 4;
	int** mat = create_matrix(n, n);

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			mat[i][j] = i + j;
			printf("%d ", mat[i][j]);
		}
        		printf("\n");
	}
	free(mat);
	return 0;
}

