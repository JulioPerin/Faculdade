/*4) Complet
ar o c�digo a seguir para:
a) Ler a quantidade somente se o valor � v�lido.
b) Garantir que a quantidade seja maior que 0;
c) Garantir que a m�dia seja float e que n�o seja realizada divis�o por zero.
*/

#include <stdio.h>
int main(void)
{
    char opcao;
    int quantidade, soma, qtde;
    float valor, media;


    do //repetir
    {
        soma=0;
        qtde=0;
        do
        {
            do
            {
                printf("Informe o valor: ");
                scanf("%f", &valor);
            }
            while(valor<0);

            do
            {
                printf("Informe a quantidade: ");
                scanf("%d", &quantidade);
            }
            while(quantidade < 0);

            soma = soma + (valor * quantidade);
            qtde++;

        }
        while(valor != 0);

            media = (float)soma / qtde;
            printf("Media geral (de todas as entradas): %.2f\n", media);


            printf("\nDeseja repetir a execucao do programa? (S/s)");
            setbuf(stdin, NULL);
            scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
