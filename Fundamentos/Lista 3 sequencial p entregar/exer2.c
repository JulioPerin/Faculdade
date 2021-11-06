/* Fazer um programa para ler o salário de uma pessoa, o percentual de aumento
 e o percentual de descontos. Os descontos incidem sobre o salário com aumento. */

 #include <stdio.h>

 int main(void)
 {
     float sal, aumen, desc, cmaumento, cmdesc;

     printf("Informe o salario: ");
     scanf("%f", &sal);
     printf("Informe o aumento(sem usar %%): ");
     scanf("%f", &aumen);
     printf("Informe o desconto(sem usar %%: ");
     scanf("%f", &desc);

     cmaumento = sal + (sal * (aumen/100));
     printf("\nSalario com aumento=R$%.2f", cmaumento);

     cmdesc = cmaumento - (cmaumento * (desc/100));
     printf("\nSalario liquido=R$%.2f", cmdesc);

     return 0;
 }
