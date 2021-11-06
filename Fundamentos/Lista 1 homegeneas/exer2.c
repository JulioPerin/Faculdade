/* 2) Gerar um arquivo de cabe�alho chamado vetores.h com uma fun��o para gerar um vetor com n�meros aleat�rios, com determinado tamanho e que os valores
aleat�rios variem entre 0 e n e com outra fun��o para mostrar um vetor com tamanho n�o fixo.
Utilizar essas fun��es para:
a) Gerar um vetor de valores rand�micos com a quantidade de elementos e o valor de n informada pelo usu�rio. Validar as entradas para que sejam informados valores positivos.
b) Mostrar o vetor.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a m�dia dos pares que est�o armazenados no vetor. Validar para que n�o seja realizada divis�o por zero no c�lculo da m�dia.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    int maximo, limite;

    do
    {
        printf("Informe o valor maximo dos numeros: ");
        scanf("%d", &limite);
    }while(limite<=0);

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &maximo);
    }while(maximo<=0);

    int vetor[maximo];

    gerarVetorde0aLimite(limite, maximo, vetor);
    mostrarVetor(limite, maximo, vetor);

}
