/* 8) Ler um texto (pode ser composto por uma ou mais palavras), copiar para um vetor somente a primeira palavra. Mostrar a string armazenada.*/


#include <stdio.h>
#include <string.h>


int main(void)
{
    char opcao;
    do // repetir o programa//
    {
        char txt[151] ;
        int tamanho, i=0;

        printf("Informe uma frase de ate 150 caracteres: ");
        setbuf(stdin, NULL);
        gets(txt);


        printf("A string copiada eh: ");

         while(txt[i] != '\0')
        {
            if(txt[i] != ' ')
            {
                printf("%c" ,txt[i]);
                i++;
            }
            else
            {
                break;
            }
        }













        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
