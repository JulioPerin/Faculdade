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

// Cada vez o registro com chave x é recuperado, o mesmo é deslocado para uma posição anterior
// Por exemplo, se x estiver na posição 5, será deslocado para a posição 4
int transposicao(int x, int v[], int n){
	int i, aux;

	for (i = 0; i < n && x != v[i]; i++);

	// Verificar se o item foi encontrado e se ele já não está na primeira posição
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



