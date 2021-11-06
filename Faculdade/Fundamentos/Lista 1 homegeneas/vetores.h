// Grava elementos no vetor
void gerarVetorde0aLimite(int limite, int maximo, int vetor[])
{
    int i;

    srand(time(NULL));

    for(i=0; i<maximo; i++)
    {
        vetor[i] = rand() % (limite+1);
    }
}


void mostrarVetor(int limite, int maximo, int vetor[])
{
    int i, minimo, contpar=0, cont=0;
    minimo = limite;

    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);
        if(vetor[i] < minimo);
        {
            minimo = vetor[i];
        }
        if(vetor[i]%2==0)
        {
            cont++;
            contpar = contpar + vetor[i];
        }
    }

    printf("\nO menor numero eh: %d", minimo);
    printf("\nA media dos pares eh: %.2f", (float)contpar/cont);

}

