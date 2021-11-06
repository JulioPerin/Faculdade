int gerarVetorde0aLimite(int limite, int maximo, int vetor[])
{
    int i;

    srand(time(NULL));

    for(i=0; i<maximo; i++)
    {
        vetor[i] = (rand() % limite);
    }
}

void mostrarVetor(int maximo, int vetor[])
{
    int i;

    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);

    }

}

void ordenaVetor(int vetor[], int tam)
{
    int aux, i, j;
    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

void gerarVetorInteiroComFaixa(int vetor[], int maximo, int limInf, int limSup)
{
    int i;

    for(i=0; i<maximo; i++)
    {
        vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
    }
}


