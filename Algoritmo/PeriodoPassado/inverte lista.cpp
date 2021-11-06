#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
		int num;
		struct Lista* prox;
}lista;


lista* cria(void);
lista* insere(lista *,int);
lista* ordena(lista *);
void imprime(lista *);
void libera_memoria(lista *);


int main(){

	int n;
	lista* l;
	lista *lo;

	l=cria();

	l=insere(l,12);
	l=insere(l,10);
	l=insere(l,14);

	imprime(l);

	l=ordena(l);

	imprime(l);

	libera_memoria(l);
	printf("\n\n");
	getchar();
	return 0;
}

lista* cria(void){
	   return NULL;
}

lista* insere(lista* l, int n){
	   lista *x;

	   x=(lista*)malloc(sizeof(lista));
	   x->num=n;
	   x->prox = l;

       return x;
}

lista* ordena(lista *l)
{
	lista *p;
	lista *aux=NULL;

	p=l->prox;
	l->prox=NULL;

	while(p!=NULL)
	{
		aux=p->prox;
		p->prox=l;
		l=p;
		p=aux;
    }

	return l;
}

void imprime(lista* l)
{
    while(l != NULL)
    {
        printf("%d\t",l->num);
		l=l->prox;
    }
	printf("\n-\n");
}
void libera_memoria(lista *l)
{
	lista *aux;
	while(l!=NULL)
	{
		aux=l->prox;
		free(l);
		l=aux;
	}
}
