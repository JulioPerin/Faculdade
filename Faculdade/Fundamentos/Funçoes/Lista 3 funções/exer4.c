/* (DESAFIO) Incremente o código da função do exercício anterior e transforme o triângulo em uma árvore de Natal, como mostrado no exemplo a seguir.*/

 #include <stdio.h>


 void triangulo(int num)
 {
     int i, j, k, linha=0, carac=1, space=1, tronco, l=0, spacet=0;

     tronco = num/2;

     for(i=1; i<num; i++)
     {
         linha = linha + 2;
     }
     space = linha /2;
     spacet = space;

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
     for(k=1; k<=tronco; k++)
     {
         for(l=1; l<=spacet; l++)
         {
             printf(" ");
         }
         printf("*\n");
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
