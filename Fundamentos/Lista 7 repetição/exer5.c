/*
5) Sabendo-se que na matemática os números primos começam a partir do 2,
 solicite ao usuário que forneça o valor do limite superior de um intervalo
  (validar para que seja maior que 2). O programa deverá fornecer todos os números
  primos presentes no intervalo. Por exemplo, se o usuário informar 10, o programa
  deverá fornecer todos os números primos entre 2 e 10, que são 2, 3, 5 e 7.
  */

#include <stdio.h>

int main(void)
{
    int num, contdiv, j, i, sup, cont;
    char opcao;

    do//repetir programa
    {
        do
        {
            printf("Informe o limite superior: ");
            scanf("%d", &sup);
            if(sup<=2){
                printf("\nValor invalido, tente novamente");
            }
        }while(sup<=2);

        i=inf;
        cont=0;
        do
        {
            contdiv=0;


            for(j=inf; j<i; j++)
            {
                if(i%j == 0)
                {
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0 && i != 1)
            {
                printf(" %d\t", i);
                cont++;

            }

            i++;
        }
        while(i <= sup);


        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
