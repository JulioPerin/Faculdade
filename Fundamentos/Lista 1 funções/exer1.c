/*1) Fazer um programa que permite aplicar as opera��es de soma,
subtra��o, multiplica��o, divis�o e resto
em dois n�meros fornecidos pelo usu�rio. Cada opera��o � uma fun��o
e deve ser acessada a partir de um
menu (use switch case). As fun��es s�o implementadas no pr�prio
programa.
a) Soma sem par�metros e sem retorno
b) Subtração com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.*/

#include <stdio.h>

void soma(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
}

void subtracao(void)
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Subtracao: %d\n", n1 - n2);
}

void multiplicacao(void)
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Multiplicacao: %d\n", (n1 * n2));
}

void divisao(void)
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
        do
        {
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);

            if(n2<=0)
            {
                printf("Valor invalido\n");
            }
         }while(n2<=0);

        printf("Divisao: %.2f\n",((float)n1 / n2));
}

void resto(void)
{
    int n1, n2;

     printf("Informe o primeiro numero: ");
                scanf("%d", &n1);
        do
        {
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);

            if(n2<=0)
            {
                printf("Valor invalido\n");
            }
        }while(n2<=0);

        printf("Resto: %d\n", (n1 % n2));
}

int main(void)
{
    char escolha, opcao;

    do
    {
        printf("A - Adicionar\n");
        printf("S - Subtrair\n");
        printf("M - Multiplicar\n");
        printf("D - Dividir\n");
        printf("R - Resto\n");
        printf("Escolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':
                soma();
                break;
            case 'S':
            case 's':

                subtracao();
                break;
            case 'M':
            case 'm':

                multiplicacao();
                break;
            case 'D':
            case 'd':

                divisao();
                break;
            case 'R':
            case 'r':

                resto();
                break;
            default:
                printf("Opcao invalida\n");
        }

        printf("\n\nDeseja repetir a execucao do programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }while(opcao == 'S' || opcao =='s');

    return 0;
}
