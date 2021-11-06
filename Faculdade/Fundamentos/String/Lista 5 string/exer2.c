/*2) Elaborar um programa que leia uma frase e determine se a mesma representa um pal�ndromo. Em frases de pal�ndromos os espa�os n�o s�o considerados, ent�o � necess�rio inicialmente retirar os espa�os em brancos do texto. Para comparar as strings use a fun��o int comparaStrings(char str1[], char str2[]) criada na Lista 4 de exerc�cios.*/

#include <stdio.h>
#include <string.h>

int main(void)
{


     int i, valor = 0;
     char palavra[150], inversa[150];


     printf("\nDigite uma palavra: ");
     gets(palavra);

    //Converter a palavra digitada para min�sculas
    for(i = 0; palavra[i]; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }

     //Copiar a palavra digitada para que seja invertida
    strcpy(inversa, palavra);

    //Inverter a palavra copiada
    strrev(inversa);

    valor = strcmp(palavra, inversa);

    if (valor == 0)
    {
       printf("\nA palavra %s eh palindroma\n", palavra);
    }

    else
    {
       printf("\nA palavra %s n�o eh pal�ndroma\n", palavra);
    }


 return 0;
}

