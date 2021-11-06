#include <stdio.h>

int quadradoPerf(int num)
{
    int resultado=0, raiz;

    raiz = sqrt(num);

    if(raiz * raiz == num)
    {
        resultado = 1;
        printf("\n%d eh um quadrado perfeito --> raiz de quadrado de %d eh %d", num, num, raiz);
    }
    return(resultado);

}

int main(void)
{



    return 0;
}
