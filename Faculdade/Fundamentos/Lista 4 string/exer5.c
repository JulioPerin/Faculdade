/* 4) Fazer uma função para contar a quantidade de caracteres de uma string, incluindo espaços, e outra função não incluindo espaços.
*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151] ;
        int tamanho, i;

        printf("Informe uma frase de ate 150 caracteres: ");
        setbuf(stdin, NULL);
        gets(txt);


        tamanho = strlen(txt);//calcula tamanho da string

        printf("Texto inverso: ");
        for(i=tamanho; i>=0; i--)
        {
            printf("%c" ,txt[i]);
        }












        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
