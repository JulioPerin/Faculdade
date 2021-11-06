/*
5) Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1.
Apresente os valores em ordem decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.
*/

int main(void)
{
    int i, cont, cont2;
    float media;
    char opcao;

    do // repetir o programa//
    {
        cont=0;
        cont2=0;

    for(i=200; i>=1; i--)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
           cont = cont + i;
           cont2++;
        }
    }

    media = (float)cont / cont2;
    printf("\nA media eh= %.2f", media);

        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    }
    while(opcao == 's' || opcao == 'S');


    return 0;
}
