/*
Implemente a funcao que receba quatro parametros: numero inteiro a ser procurado, vetor de inteiros
(v[] ou *v), tamanho do vetor (n) e um numero inteiro representando tamanho minimo (m). Nessa funcao,
enquanto o espaco de busca (espaco coberto entre os indices esquerdo e direito em uma busca binaria,
ou seja, direito - esquerdo + 1) for maior que m, o método de busca binaria deve ser aplicada. Quando
o espaco de busca ficar menor ou igual a m, a busca sequencial devera ser executada. Se a busca sequencial
for aplicada, o espaco de busca devera ser impresso (caso houver). Ao final a posição do item procurado no
vetor e retornada. Caso o item nao seja encontrado, a funcao devera retornar -1.

Input Format:
Na primeira linha deve ser lido um numero inteiro que devera ser procurado. Na segunda linha deve ser lido o
tamanho do vetor. Na terceira devem ser lidos os elementos do vetor. Na quarta linha deve ser lida o tamanho minimo
da particao (m) para fazer a busca binaria.

Output Format:
Na primeira linha deve ser impresso o subvetor referente ao espaço de busca a partir do momento em que a busca sequencial
e executada. Na proxima linha deve ser impressa a posicao retornada pela funcao.

Caso a busca sequencial nao tenha sido executada, apenas a posicao retornada pela funcao deve ser impressa.
*/

int busca_bin_sequencial(int key, int tam, int v[], int m)
{
    int ini=0, fim=tam-1, meio;
    int i;

    while(ini <= fim)
    {
        meio = (ini + fim)/2;
        if(key < v[meio] && meio > m)
        {
            fim = meio -1;
        }
        else if(key > v[meio] && meio > m)
        {
            ini = meio + 1;
        }
        else return meio;
        if(meio <= m)
        {
            for (i = 0; i < tam && key < v[i]; i++);
            {
                if ((i < tam) && (v[i] == key))
                {
                   return i;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
    return -1;


}

int main()
{
    int key = 1, tam=16, m=4, i;
    int v[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    /*scanf("%d", &key);
    scanf("%d", &tam);
    int v[tam];
    for(i=0; i<=tam; i++;)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &m); */

    printf("%d", busca_bin_sequencial(key, tam, v, m));

    return 0;
}
