#include <stdio.h>

int mdc(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else if (a%b == 0)
    {
        return b;
    }
    else
    {
        return mdc(b, a % b);
    }
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", mdc(a, b));
}
