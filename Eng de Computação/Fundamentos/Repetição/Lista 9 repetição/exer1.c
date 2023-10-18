/*
1) Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos)
até que o valor zero seja informado. O valor zero não deverá ser considerado. O programa deve
informar o maior e o menor entre todos os valores lidos e apresentar a média dos valores negativos
informados. Obs.: Verificar para que não sejam realizadas divisões por zero.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int num, maior, menor, contneg, somaneg;
    float media;


    do//repetir programa
    {
        somaneg=0;
        contneg=0;
        do
        {
            printf("Informe um valor: ");
            scanf("%d", &num);
            if(num > maior)
            {
                maior = num;
            }
            if(num < menor)
            {
                menor = num;
            }
            if(num<0)
            {
                somaneg = somaneg + num;
                contneg++;
            }


        }while(num!=0);

        printf("\nO menor numero apresentado eh: %d", menor);
        printf("\nO maior numero apresentado eh: %d", maior);
        if(contneg > 0)
            {
            media = (float)somaneg / contneg;
            printf("\nA media dos negativos eh: %.2f", media);
            }














        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
