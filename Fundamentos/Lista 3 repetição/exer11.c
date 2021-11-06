/*
11) Um número é primo quando é divisível de maneira exata somente por
1 e por ele mesmo. Na figura a seguir, os números destacados são primos:
*/

#include <stdio.h>

int main(void)
{
    int num, i, result;
    char opcao;

    do // repetir o programa//
    {
        result=0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            result++;
        }
    }
        if(result == 0)
        {
            printf("\n%d eh um numero primo\n", num);
        }
    else
    {
        printf("\n%d nao eh primo\n", num);
    }
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

 return 0;
}
