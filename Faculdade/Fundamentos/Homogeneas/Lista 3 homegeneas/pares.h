int somaPares(int num[], int maximo)
{
    int i, j, cont=0;

    for(j=0; j<maximo; j++)
    {
        cont=0;
        printf("Os pares ate %d sao ==> ", num[j]);
        for(i=1;i<=num[j];i++)
        {

            if(num[j] == num[j+1])//pular para o proximo caso seja numero repetido
            {
                j++;
            }
            else
            {
                if(i%2==0)
                {
                    printf(" %d ", i);
                    cont = cont + i;
                }
            }
        }
     printf("Soma = %d\n", cont);
    }
}
