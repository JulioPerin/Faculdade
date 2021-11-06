/* Ler três valores inteiros que representam os lados de um triângulo e determinar se esses valores podem formar um triângulo
 (obs.: para ser um triângulo cada lado deve ser menor que a soma dos outros dois lados). Se for um triângulo, determinar o
 seu tipo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e escaleno (todos os lados diferentes). */

 #include <stdio.h>

 int main(void)
 {
     int a, b, c;

     printf("Informe o primeiro lado: ");
     scanf("%d", &a);
     printf("Informe o segundo lado: ");
     scanf("%d", &b);
     printf("Informe o terceiro lado: ");
     scanf("%d", &c);

     if(a < (b + c) && b < (a + c) && c < (a + b))
     {
         if(a =!b && a!= c && c != b)
         {
             printf("O triangulo eh escaleno");
         }
         else if(a == b || a == c || c == b)
         {
             printf("O triangulo eh isosceles");
         }
         else if(a == b && a == c && c == b)
         {
             printf("O triangulo eh equilatero");
         }
     }
    else
    {
        printf("Esses valores nao sao capazes de formar um triangulo");
    }
    return 0;
 }
