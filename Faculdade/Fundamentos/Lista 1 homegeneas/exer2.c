/* 2) Gerar um arquivo de cabeçalho chamado vetores.h com uma função para gerar um vetor com números aleatórios, com determinado tamanho e que os valores
aleatórios variem entre 0 e n e com outra função para mostrar um vetor com tamanho não fixo.
Utilizar essas funções para:
a) Gerar um vetor de valores randômicos com a quantidade de elementos e o valor de n informada pelo usuário. Validar as entradas para que sejam informados valores positivos.
b) Mostrar o vetor.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos pares que estão armazenados no vetor. Validar para que não seja realizada divisão por zero no cálculo da média.
O programa permanecerá em execução até que seja escolhida a opção sair.
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
