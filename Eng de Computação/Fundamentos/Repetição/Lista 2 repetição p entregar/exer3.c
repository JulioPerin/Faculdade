/*
3) Ler caracteres. Contar quantas vogais minúsculas são informadas. O caractere zero '0' indica o
final da leitura, ou seja, finalizar a leitura quando informado esse caractere. O programa deverá
informar também quantos caracteres foram digitados ao todo.
*/

#include <stdio.h>

int main(void)
{
    char opcao, carac;
    int cont1, cont2;


    do // repetir o programa//
    {
        cont2=0;
        cont1=0;
        do
        {

            printf("Informe um caracter: ");
            setbuf(stdin, NULL);
            scanf("%c", &carac);

            if(carac != '0') //if para sair e o caractere ter que estar entre aspas
            {
                cont2++;

                if(carac == 'A' || carac == 'B' || carac == 'C' || carac == 'D' || carac == 'E')
                {
                    cont1++;
                }
            }

        }while(carac != '0');

        printf("\nNumero de vogais maiusculas: %d", cont1);
        printf("\nNumero total de caracteres inseridos: %d", cont2);









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
