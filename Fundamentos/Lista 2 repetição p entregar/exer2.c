/*
2) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o
valor unitário de cada produto. Calcular o valor total da compra. Informar esse valor
para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco
e informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto
a quantidade for maior que zero. Se informado zero ou valor negativo para a quantidade,
não ler o valor unitário.
*/

#include <stdio.h>

int main(void)
{
    int num, dez, cinco, um;
    char opcao;
    float preco, soma, soma2, cents, pago, troco;

    do // repetir o programa//
    {
        do
        {

            printf("Informe a quantidade do produto: ");
            scanf("%d", &num);

            if(num > 0)
            {
                soma=0;
                soma=2;

                printf("Informe o valor desse produto:");
                scanf("%f", &preco);


                soma2 = (num * preco) + soma2;
            }
        }
        while(num > 0);



        printf("%.2f\n", soma2);
        printf("Informe o valor pago:");
        scanf("%f", &pago);

        troco = pago - soma2;
        printf("O troco eh de=R$%.2f:\n", troco);
        cents = troco - (int)troco;
        dez = troco / 10;
        cinco = ((int)troco % 10) / 5;
        um = (int)cinco % 10;

        printf("\n%d nota(s) de 10 reais", dez);
        printf("\n%d nota(s) de 5 reais", cinco);
        printf("\n%d nota(s) de 1 real", um);
        printf("\ne %.2f centavos", cents);




            printf("\nDeseja repetir a execucao do programa? (S/s)");
            setbuf(stdin, NULL);
            scanf("%c", &opcao);

        }
        while(opcao == 's' || opcao == 'S');

    return 0;
    }

