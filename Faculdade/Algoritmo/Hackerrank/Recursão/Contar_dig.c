#include <stdio.h>


int conta_digitos(int n, int num){

    if(n<=0 && n>9)
        return 0;

    else if(num%10 == n)
        return (1+conta_digitos(n, num/10));
    else
        return conta_digitos(n, num/10);


}

int main(void)
{
    int a=3, b=3304353;

    //scanf("%d %d", &a &b)

    printf("%d", conta_digitos(a, b));
}
