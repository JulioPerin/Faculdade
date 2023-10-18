/*
2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um
número que atende essa condição. Esse número representa a quantidade de números
primos a serem mostrados.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int i, num, contdiv, j, contprimos;

    do // repetir o programa//
    {

        do//validar entrada
        {
            printf("Informe a quantidade de numeros primos desejados: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido\n");
            }
        }
        while(num<=0);

        i=2;
        contprimos=0;

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
          if(contdiv == 0)
          {
              printf("%d\t", i);
              contprimos++;
          }
          i++;
        }
        while(contprimos < num);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
