/*
3) Completar e corrigir o código a seguir para:
a) Ler a quantidade somente se
a categoria é válida.
b) Garantir que a quantidade seja maior que 0.
c) Validar para que não seja realizada uma divisão por zero no cálculo da média.
d) Permitir a leitura da categoria nas execuções sucessivas do programa.
e) Garantir que a média seja float
*/

#include <stdio.h>

int main(void)
{
    char categoria, opcao;
    int quantidade, soma, total;
    float media;

    do // repetir o programa//
    {
        do
        {
            printf("Informe a categoria: ");
            setbuf(stdin, NULL);
            scanf("%c", &categoria);

            if(categoria == 'A' || categoria == 'B')
            {
                do
                {
                    soma=0;
                    total=0;
                    printf("Informe a quantidade: ");
                    scanf("%d", &quantidade);

                    if(quantidade>0)
                    {
                        soma = soma + quantidade;
                        total++;
                    }

                    if(quantidade<=0)
                    {
                        printf("\nValor invalido\n");
                    }
                }
            while(quantidade<=0);
            }
        }
        while(categoria == 'A' || categoria == 'B');

        media = (float)soma / total;


        printf("A media dos produtos eh %.2f", media);
        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);


    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
