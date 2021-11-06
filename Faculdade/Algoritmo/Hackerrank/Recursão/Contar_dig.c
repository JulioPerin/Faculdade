#include <stdio.h>

int conta_digitos(int n, int num){
    if((n<0) || (n>9))
        return 0;
    else if ((num >= 0) && (num <= 9))
        return (num == n);
    else
        return ((num % 10) == n) + conta_digitos(n, num / 10);
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", conta_digitos(a, b));
}
