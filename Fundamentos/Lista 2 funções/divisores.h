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

int somadiv(int num)
{
    int i, soma=0, cont=0;

    printf("Os divisores de %d sao= ", num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf(" %d ", i);
            soma = soma + i;
            cont++;
        }
    }
    printf("possui %d divisores e sua soma eh = %d", cont, soma);
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
