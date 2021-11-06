/*(DESAFIO) Fazer um programa que receba um valor inteiro, que se refere a quantidade de
 linhas de um tri�ngulo. Implementar no pr�prio programa uma fun��o que recebe como
 par�metro esse valor e imprime um tri�ngulo. */

 #include <stdio.h>


 void triangulo(int num)
 {
     int i, j, linha=0, carac=1, space=1;

     for(i=1; i<num; i++)
     {
         linha = linha + 2;
     }
     space = linha /2;

     for(i=1; i<=num; i++)
     {
         for(j=1; j<=space; j++)
         {
             printf(" ");
         }
         for(j=1; j<=carac; j++)
         {
             printf("*");
         }

         printf("\n");
         carac = carac + 2;
         space = space - 1;
     }

 }

 int main (void)
 {
     int num;

     do{
        printf("Informe o tamanho da piramide: ");
        scanf("%d", &num);
     }while(num<=0);

     triangulo(num);


 }
