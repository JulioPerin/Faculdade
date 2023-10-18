#include <stdio.h>

void fatorial(void)
{
int i, fat, j;

    for(i=1; i<=12; i++)
        {
            fat=1;
            printf("%d! => ", i);

            for(j=i; j>=2; j--)
            {
                fat = fat * j;
                printf("%d * ", j);
            }
            printf("1 = %d\n", fat);
        }
}

void mostrasfatorial(void)
{
    int j, num;
    long long int fat;

        do
            {
                printf("Informe um numero: ");
                scanf("%d", &num);

            fat=1;
            printf("%d! => ", num);

            for(j=num; j>=2; j--)
            {
                fat = fat * j;
                printf("%d * ", j);
            }
            printf("1 = %lli\n", fat);
            }while(num>0);


}
