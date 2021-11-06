/* 4) Fazer uma função para contar a quantidade de caracteres de uma string, incluindo espaços, e outra função não incluindo espaços.
*/

/* Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa string*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151] ;
        int cont=0, cont2=0, i=0;

        printf("Informe uma frase de ate 150 caracteres: ");
        setbuf(stdin, NULL);
        gets(txt);


         while(txt[i] != '\0')
        {
            if(txt[i] != ' ' && txt[i] != '\0')
            {
                cont++;
            }
            if(txt[i] == ' ' && txt[i] != '\0')
            {
                cont2++;
            }
            i++;
        }
        printf("Numero de caracteres com espaco: %d", cont + cont2);
        printf("\nNumero de caracteres sem espaco: %d", cont - cont2);











        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
