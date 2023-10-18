/*
5) Apresentar os números primos entre dois valores, que r
epresentam os limites inferior e superior,
respectivamente, de um intervalo, informados pelo usuário. Apresentá los com n números por linha. n é
informado pelo usuário. Validar n para que seja maior que 0. Validar o limite inferior para seja maior que 1 e o
limite superior para que seja maior ou igual ao limite inferior. Implementar a repetição de programa.
Exemplo de entrada e saída:
*/

#include <stdio.h>

int main(void)
{
    int num, contdiv, j, i, inf, sup, linha, cont;
    char opcao;

    do//repetir programa
    {
        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d", &inf);
            if(inf <= 0){
                printf("\nValor invalido, tente novamente");
            }
        }while(inf <= 0);

        do
        {
            printf("Informe o limite superior: ");
            scanf("%d", &sup);
            if(inf > sup || sup <=0){
                printf("\nValor invalido, tente novamente");
            }
        }while(inf > sup || sup <=0);

        do
        {
            printf("Informe quantos numeros deseja imprimir por linha: ");
            scanf("%d", &num);
            if(num <= 0){
                printf("\nValor invalido, tente novamente");
            }
        }while(num <= 0);


        i=inf;
        cont=0;
        do
        {
            contdiv=0;


            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0 && i != 1)
            {
                printf(" %d ", i);
                cont++;

                if(cont%num == 0)
                {
                    printf("\n");
                }
            }

            i++;
        }
        while(i <= sup);


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;

}
