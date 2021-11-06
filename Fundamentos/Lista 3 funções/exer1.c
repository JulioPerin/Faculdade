/* 1) Fazer funções para:
a) Mostrar os múltiplos de y entre 1 (se for o caso) e x, sendo x o valor até o qual os múltiplos de y devem ser mostrados. A função recebe por parâmetro o número e valor que representa "múltiplo de". Por exemplo: parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 1 e 10.
b) Somar os múltiplos de y entre 1 (se for o caso) e x, sendo x o valor até o qual os múltiplos devem ser somados. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa somar os múltiplos de 2 entre 1 e 10. O resultado da soma deve ser retornado da função.
*/

#include <stdio.h>


int mult1(int num1, int num2)
{
   int i, soma=0;

    printf("Os divisiveis por %d sao= ", num1);

    for(i=1;i<=num1;i++)
    {
        if(i%num2==0)
        {
            printf(" %d ", i);
            soma = soma + i;
        }
    }
  printf("e a soma deles eh: %d", soma);
}

int mult2(int num1, int num2, int num3)
{
   int i, j, soma=0;

    for(j=num1; j<=num2; j++)
    {
        printf("%d = ", j);
        for(i=1;i<=j;i++)
        {
            if(i%num3==0)
            {
                printf(" %d ", i);
                soma = soma + i;
            }
        }
        printf("-> soma: %d", soma);
        printf("\n");
    }
}

int main(void)
{
    char opcao;
    int op, num, num2, num3;

    do//repetir programa
    {
        printf("1 - Mostra e soma os multiplos de um numero\n2 - Mostra e soma os multiplos em um intervalo");

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

            do//evitar num negativo
            {
                printf("Informe um valor para o teste de multiplos: ");
                scanf("%d", &num2);
            }while(num2<=0);

            mult1(num, num2);
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

            do //evitar num negativo
            {
                printf("Para cada numero do intervalo, testar o multiplo de: ");
                scanf("%d", &num3);
            }while(num3<=0);

            mult2(num, num2, num3);
        }







        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
