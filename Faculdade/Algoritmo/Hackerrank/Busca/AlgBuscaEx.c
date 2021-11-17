#include <stdio.h>
#include <stdlib.h>

int busca_sequencial(int x, int v[], int n){
	int i;

	for (i = 0; i < n; i++)
		if (x == v[i])
			return i;

	return -1;
}

int busca_sequencial3(int x, int v[], int n){
	int i;

	for (i = 0; i < n && x < v[i]; i++);

	if ((i < n) && (v[i] == x))
		return i;
	else
		return -1;

    //return (i<n) ? i : -1;
}

// Cada vez o registro com chave x � recuperado, o mesmo � deslocado para uma posi��o anterior
// Por exemplo, se x estiver na posi��o 5, ser� deslocado para a posi��o 4
int transposicao(int x, int v[], int n){
	int i, aux;

	for (i = 0; i < n && x != v[i]; i++);

	// Verificar se o item foi encontrado e se ele j� n�o est� na primeira posi��o
	if ((i > 0) && (i < n)){
		aux = v[i];

		v[i] = v[i - 1];
		v[i - 1] = aux;

		i--;

		return i;
	}
	else
		return -1;
}


int main(){

    return 0;
}



