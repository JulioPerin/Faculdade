/* Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa string*/

#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151], vogais[5] = {0};
        int i=0, j=0;

        printf("Informe uma frase de ate 150 caracteres: ");
        setbuf(stdin, NULL);
        gets(txt);

         while(txt[i] != '\0')
        {
            if(txt[i] == 'a' || txt[i] == 'A')
            {
                vogais[0]++;
            }
            if(txt[i] == 'e' || txt[i] == 'E')
            {
                vogais[1]++;
            }
            if(txt[i] == 'i' || txt[i] == 'I')
            {
                vogais[2]++;
            }
            if(txt[i] == 'o' || txt[i] == 'O')
            {
                vogais[3]++;
            }
            if(txt[i] == 'u' || txt[i] == 'U')
            {
                vogais[4]++;
            }
            i++;
        }
        printf("\n");
        for(j=0; j<5; j++)
        {
            printf(" %d ", vogais[j]);
        }









        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
