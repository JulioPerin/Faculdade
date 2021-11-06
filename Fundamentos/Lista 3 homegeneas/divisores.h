#include <stdio.h>

int divisores1(int num)
{
    int i,cont=0;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cont++;
        }
    }
  return(cont);
}

int divisores2(int num)
{
    int i;

    printf("Os divisores de %d sao= ", num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf(" %d ", i);
        }
    }

}

int somadiv(int num[], int maximo)
{
    int i, j, cont=0;

    for(j=0; j<maximo; j++)
    {

        printf("Os divisores de %d sao ==> ", num[j]);
        for(i=1;i<=num[j];i++)
        {

        if(num[j] == num[j+1])//pular para o proximo caso seja numero repetido
        {
            j++;
        }
        else{
            if(num[j]%i==0)
            {
                printf(" %d ", i);
                cont++;
            }
        }
        }
        printf("possui %d divisores\n", cont);
        }
}

int mdc(int num1, int num2)
{
    int sobra = 1;

    while(sobra)
    {
        sobra = num1 % num2;
        num1 = num2;
        num2 = sobra;
    }
    printf("%d", num1);
}
