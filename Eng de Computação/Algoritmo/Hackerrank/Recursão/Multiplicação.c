#include <stdio.h>

int mult(int a, int b)
{
    if(a==0)
    {
        return 0;
    }
    else if(b==0)
    {
        return 0;
    }

    else if(b==1 || a==1)
    {
        return a;
    }
    else
    {
        return (a * mult(b-1, a));
    }
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", mult(a, b));

    return 0;
}
