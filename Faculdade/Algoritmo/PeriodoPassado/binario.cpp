#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int binario(char numero[100], int tam)
{
    int i=tam-1, dec;

		if (numero[i] == '1') {
			dec += pow(2,tam-1-i);
			i--;
			if(i >= 0);
			{
			    binario(numero, tam);
			}
		}

	printf("Decimal: %d", dec);
}

int main(void) {
	char numero[100];
    int tam;

    scanf("%s", &numero);
	tam = strlen(numero);

	binario(numero, tam);


	return 0;
}




