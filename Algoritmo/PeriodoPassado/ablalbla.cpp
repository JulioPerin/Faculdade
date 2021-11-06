//calcula o angulo dos vetores (a,b) (c,d), apenas substituir os valores

#include <stdio.h>
#include <math.h>

int main()
{
    float a=-2.4, b=-2.4, c=10.2, d=8, result;

    //result =(a * c) + (b*d) / (sqrt(((a*a)+(b*b))) * sqrt(((c*c)+(d*d)))); //angulo
    result = sqrt(((a*a)+(b*b)+ (c*c))); // módulo

    printf("%f", result);



    return 0;
}
