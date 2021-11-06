/*
2) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1. Por exemplo, 9, é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado pelo usuário.
*/

#include <stdio.h>


char multneg(int num1)
{
   int i, soma=0;

    printf("%d =", num1);

    for(i=1;i<=num1;i++)
    {
        if(i%2!=0 && i!=num1)
        {
            printf(" %d ", i);
            soma = soma + i;
        }
    }
    if(soma == num1)
    {
        return('s');
    }
    else
    {
        return('n');
    }

}

int multneg2(int num1, int num2)
{
   int i, j, soma;

    for(j=num1; j<=num2; j++)
    {
        soma=0;
        printf("%d = ", j);
        for(i=1;i<=j;i++)
        {

            if(i%2!=0)
            {
                printf(" %d ", i);
                soma = soma + i;
            }
        }

            printf("= %d ", soma);
            if(soma == i)
            {
                printf("-> Equivale a soma dos impares");
            }
            else
            {
                printf("->Nao equivale a soma dos impares");
            }
        printf("\n");
    }
}

int main(void)
{
    char opcao, result;
    int op, num, num2, num3;

    do//repetir programa
    {
        printf("1 - Verificar se o numero equivale a soma dos impares\n2 - Verificar se um intervalo de numeros a equivale a soma de seus impares");

         printf("\nEscolha uma das opcoes: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            do//evitar num negativo
            {
                printf("Informe um valor: ");
                scanf("%d", &num);
            }while(num<=0);

            result = multneg(num);
            if(result == 's')
            {
                printf("-> Equivale a soma dos impares");
            }
            else
            {
                printf("-> Nao equivale a soma dos impares");
            }

            break;

        case 2:
            do //evitar num negativo
            {
                printf("Informe o limite inferior do intervalo: ");
                scanf("%d", &num);
            }while(num<=0);

            do //evitar limite inferior > superior
            {
                printf("Informe o limite superior do intervalo: ");
                scanf("%d", &num2);
            }while(num2<=num);

            multneg2(num, num2);
        }







        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
