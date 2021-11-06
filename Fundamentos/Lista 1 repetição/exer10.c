/*
 10) Uma indústria fabrica roupas categorizadas em masculinas,
 femininas e infantis. Ler a quantidade e a respectiva categoria
 (M, F ou I). Após o loop, calcular e mostrar o percentual de
 produtos por categoria. Validar para que seja informada uma
 categoria válida. Finalizar a leitura quando informado um
 valor 0 ou negativo para a quantidade. Ler inicialmente a
 quantidade e depois a categoria. Se informada uma quantidade
 , não ler a categoria. */

#include <stdio.h>

int main(void)
{
    int roupas=1, contM=0, somaM=0, contF=0, somaF=0, contI=0, somaI=0, soma100;
    char gen;
    float porcM, porcF, porcI;

    printf("Informe o valor = 0 para parar a contagem\n");
    while(roupas > 0)
    {
        printf("\nInforme a quantidade de roupas: ");
        scanf("%d", &roupas);

        if(roupas > 0)
        {
            printf("Masculino= M/m, Feminino= F/f, Infantil= I/i\n");
            printf("Informe o genero do produto: ");
            setbuf(stdin,NULL);
            scanf("%c", &gen);

            if(gen == 'M' || gen == 'm')
            {
                contM++;
                somaM = somaM + roupas;

            }
            else if(gen == 'F' || gen == 'f')
            {
                contF++;
                somaF = somaF + roupas;
            }
            else if(gen == 'I' || gen == 'i')
            {
                contI++;
                somaI = somaI + roupas;
            }
        }
    }
    soma100 = somaF + somaI + somaM;
    porcF = somaF * 100 / (float)soma100;
    porcM = somaM * 100 / (float)soma100;
    porcI = somaI * 100 / (float)soma100;

    printf(" %.0f%% Femino\n %.0f%% Masculino\n %.0f%% Infantil", porcF, porcM, porcI);

    return 0;
}
