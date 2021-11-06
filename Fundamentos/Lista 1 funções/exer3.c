/*
3) Fazer duas fun��es: uma para calcular o fatorial de um n�mero e a outra para mostrar o fatorial de um n�mero. Ambas as fun��es devem ser implementadas em um arquivo de cabe�alho chamado "fatorial.h". Elaborar um programa que use essas fun��es para:
a) Calcular e mostrar o fatorial dos n�meros entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usu�rio. Continuar a leitura enquanto forem informados valores positivos.
Exemplo de entrada e sa�da
*/

#include <stdio.h>

int fat(void)
{


    int i, fat, j;

    for(i=1; i<=8; i++)
        {
            fat=1;
            printf("%d! => ", i);

            for(j=i; j>=2; j--)
            {
                fat = fat * j;
                printf("%d * ", j);
            }
            printf("1 = %d\n", fat);
        }

}

int fat2(void)
{
    int j, num;
    long long int fat;

        do
            {
                printf("Informe um numero: ");
                scanf("%d", &num);

            fat=1;
            printf("%d! => ", num);

            for(j=num; j>=2; j--)
            {
                fat = fat * j;
                printf("%d * ", j);
            }
            printf("1 = %lli\n", fat);
            }while(num>0);


}

int main(void)
{
    char opcao, escolha;

    do//repetir programa
    {

        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero\n");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':

                fat();
                break;

            case 'B':
            case 'b':

                fat2();
                break;

            default :
                printf("\nOpcao invalida\n");
                break;


        }


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
