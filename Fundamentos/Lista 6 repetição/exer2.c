/*
2) Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um
n�mero que atende essa condi��o. Esse n�mero representa a quantidade de n�meros
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
