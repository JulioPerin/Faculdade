/*
7) Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo (que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é encerrada a entrada de dados. O programa deve calcular e fornecer:
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo.
*/

#include <stdio.h>

int main(void)
{
    char opcao, sexo;
    float altura, mediaf, mediam, menor, maior, alturam, alturaf, numm, numf;
    int valid;

    do//repetir programa
    {
        menor=0;
        maior=0;
        do
        {
            do
            {
                printf("Informe a altura: ");
                scanf("%f", &altura);
            }while(altura<0);

            do
            {
                printf("Informe o sexo: ");
                setbuf(stdin, NULL);
                scanf("%c", &sexo);

            if (sexo == 'M')
            {
                numm++;
                alturam = alturaf + altura;
                valid = 1;
            }
            if(sexo == 'F')
            {
                numf++;
                alturaf = alturaf + altura;
                valid = 1;
            }
            else
            {
                valid = 0;
            }
        }while(valid == 0);

        if(altura > menor)
        {
            menor = altura;
        }
        if(altura > maior)
        {
            maior = altura;
        }

        }while(altura!=0);

        printf("\nA maior altura eh: %.2f", maior);
        printf("\nA menor altura eh: %.2f", menor);
        mediam = alturam / numm;
        printf("\nA media de altura dos homens eh de: %.2f", mediam);
        mediaf = alturaf / numf;
        printf("\nA media de altura dos mulheres eh de: %.2f", mediaf);










        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
