/*
1) Um determinado material radioativo perde metade de sua massa a cada 60 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
para que essa massa se torne menor que 0,5 gramas. A massa inicial informada pelo
usuário tem que ser maior que zero. Validar essa entrada, isto é, ficar repetindo a
leitura da massa inicial até que o usuário informe um valor válido (maior que zero).
O programa deverá mostrar a massa final e o tempo calculado em minutos.
*/

#include <stdio.h>

int main(void)
{
    char opcao;
    int  tempo;
    float massa;

    do//repetir programa
    {
        tempo=0;
        do{
        printf("Informe o valor de massa inicial: ");
        scanf("%f", &massa);
        }
        while(massa<=0);

        do
        {
            massa = massa / 2;
            tempo++;
        }
        while(massa> 0.5);

            printf("\nO tempo necessario eh de: %d minutos", tempo);
            printf("\nO valor final eh de: %.2f", massa);











        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
