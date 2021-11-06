/*
9) Ler números inteiros informados pelo usuário até ser informado um
valor negativo. Dentre os números informados, exceto o valor negativo que é a condição de saída:
*/

int main(void)
{
    int num, cont10e100=0, contImp=0, contDiv10=0, contEnt10e100=0, cont30=0, contDif;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);

        if(num < 10 || num > 100)
        {
            cont10e100++;
        }
        if(num%2 != 0)
        {
            contImp++;
        }
        if(num%10 == 0)
        {
            contDiv10++;
        }
        if(num > 10 || num < 100)
        {
            contEnt10e100++;
        }
        if(num == 30)
        {
           cont30++;
        }
        if(num != 10 || num != 20 || num != 30)
        {
            contDif++;
        }

    }
    while(num > 0);

        printf("\nQuantidade de numeros menores que 10 e maiores que 100= %d", cont10e100);
        printf("\nQuantidade de numeros impares= %d", contImp);
        printf("\nQuantidade de numeros divisiveis por 10= %d", contDiv10);
        printf("\nQuantidade de numeros entre 10 e 100= %d", contEnt10e100);
        printf("\nQuantidade de vezes que o numero 30 foi informado= %d", cont30);
        printf("\nQuantidade que foram informado numeros diferente de 10, 20 ou 30= %d", contDif);
}
