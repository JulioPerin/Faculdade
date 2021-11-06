/*
1) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse intervalo que são divisíveis por 5.
*/

 #include <stdio.h>

 int main(void)
 {
     int i, cont, cont2;
     float media;
     char opcao;

    do // repetir o programa//
    {
        cont=0;
        cont2=0;

        for(i=20; i<=100; i=i+5)
        {
            cont = cont + i;
            cont2++;
        }

        media = (float)cont / cont2;
        printf("\nA media eh de = %.2f\n", media);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');

    return 0;
 }
