/*
5) Fazer um programa para mostrar os divisores, calcular a quantidade deles
e mostrar essa quantidade para os números compreendidos entre o valor ‘x’
informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário
deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior
quantidade de divisores.
*/

#include <stdio.h>

int main(void)
{
    int i, j, num, contdiv, maior;
    char opcao;

    do // repetir o programa
    {
        maior=0;

        do
        {
            printf("Informe um valor positivo de 2 a 100: ");
            scanf("%d", &num);

            if(num < 2 || num > 100)
            {
                printf("Valor invalido\n");
            }
        }
        while(num < 2 || num > 100);

        for(i=1; i<=11; i++)
        {
            contdiv=0;

            printf("%d --> ", num);

            for(j=i; j<=num; j++)
            {
                if(num%j == 0)
                {
                    printf("%d, ", j);
                    contdiv++;
                }
            }
            printf("%d divisores\n", contdiv);
            num++;

            if(contdiv > maior)
            {
                maior = contdiv;
            }
        }
        printf("O maior numero de divisores eh %d", maior);








        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
