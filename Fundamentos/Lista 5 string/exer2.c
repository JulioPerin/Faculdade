/*2) Elaborar um programa que leia uma frase e determine se a mesma representa um palíndromo. Em frases de palíndromos os espaços não são considerados, então é necessário inicialmente retirar os espaços em brancos do texto. Para comparar as strings use a função int comparaStrings(char str1[], char str2[]) criada na Lista 4 de exercícios.*/

#include <stdio.h>
#include <string.h>

int main(void)
{


     int i, valor = 0;
     char palavra[150], inversa[150];


     printf("\nDigite uma palavra: ");
     gets(palavra);

    //Converter a palavra digitada para minúsculas
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
       printf("\nA palavra %s não eh palíndroma\n", palavra);
    }


 return 0;
}

