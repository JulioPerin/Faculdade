#include <stdio.h>
#include <math.h>

int bin(float s[], int tam, int tamax)
{
    if(tam > 0)
    {
        if(s[tam-1] == 0)
        {
            return bin(s, tam-1, tamax);
        }

        return pow(2, (tamax- tam)) + bin(s, tam-1, tamax);
    }

   return 0;

}



int main(void)
{
    float s[100];
    int i, n;

    scanf("%d", &n);

    for(i=0;i<n; i++)
    {
        scanf("%f", &s[i]);
    }

    printf("%.0d", bin(s, n, n));

    return 0;
}
