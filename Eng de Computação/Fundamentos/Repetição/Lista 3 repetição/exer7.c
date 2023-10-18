/*
7) Leia 10 números e desses contar quantos são pares, quantos são ímpares e quantos são divisíveis por 7. Apresente essas quantidades.
*/

#include <stdio.h>

int main(void)
{
    int i, num, contImp, contdiv7;
    char opcao;

    do // repetir o programa//
    {
        contImp=0;
        contdiv7=0;

        for(i=0; i<=10; i++)
        {
            printf("Informe um numero: ");
            scanf("%d", &num);

            if(num%2 != 0)
            {
                contImp++;
            }
            if(num%7 == 0)
            {
                contdiv7++;
            }
        }
        printf("\nA quantidade de impares eh de: %d", contImp);
        printf("\nA quantidade de divisieis por 7 eh de: %d", contdiv7);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');


}
