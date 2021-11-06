/*
3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50
e apresentar o valor obtido da multiplicação sucessiva de N por 2,
enquanto o produto for menor que 250 (N*2; N*2*2; N*2*2*2; etc.).
O valor N deverá ser verificado quanto a sua validade. Caso o
usuário informe um valor fora da faixa, o programa deverá informar
que o valor digitado não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int num, num2;

    do//repetir programa
    {

        do
        {
            printf("Informe um numero: ");
            scanf("%d", &num);
        }while(num<=0);

        num2 = num;
        do
        {
            num = num * 2;
            if(num>250)
            {
                break;
            }
            printf("\n%d * 2 = %d", num2, num);


        }while(num<=250);








        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
