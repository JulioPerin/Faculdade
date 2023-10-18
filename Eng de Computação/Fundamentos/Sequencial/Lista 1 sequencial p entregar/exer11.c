//

#include <stdio.h>

int main(void)
{
    float salario, reajuste, salarioreajuste;

    printf("Informe o salario: ");
    scanf("%f", &salario);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &reajuste);

    salarioreajuste = salario + ((reajuste / 100) * salario);

     printf("O salario reajustado %c:%f", 130, salarioreajuste);

     return;


}
