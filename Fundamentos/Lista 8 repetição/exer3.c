/*
3) Ler a idade, o tipo (E = Estudante e P = Professor) de cinco pessoas.
Se o tipo for P, solicitar o salário e fazer a média dos salários informados.
Se o tipo for E, solicitar se o mesmo recebe mesada. Contar quantos recebem
e quantos não recebem mesada. Garantir que o usuário informe uma idade válida,
ou seja, maior que 0, que o tipo seja E ou P e que recebe mesada seja S ou N.
Validar essas entradas, ou seja, solicitar essas entradas até que sejam válidas
. Validar para que não seja realizada uma divisão por zero.
*/

#include <stdio.h>

int main(void)
{
    char opcao, tipo, mesada;
    int idade, contmesada, nmesada, profs, valid, vezes, valid2;
    float salario, media, salarioprof;

    do//repetir programa
    {
        vezes=1;
        do
        {

        profs=0;
        contmesada=0;
        nmesada=0;
        do
        {
            printf("Informe a idade da %d pessoa: ", vezes);
            scanf("%d", &idade);
        }while(idade<=0);

        do
        {
            printf("Informe o tipo (P = professor, E = estudante) ");
            setbuf(stdin, NULL);
            scanf("%c", &tipo);
            if (tipo == 'P' || tipo == 'p' || tipo == 'e' || tipo == 'E')
            {
                valid = 1;
            }
            else
            {
                valid = 0;
            }

        }while(valid == 0);// por algum motivo não sai da repetição quando informado o valor certo, me obriguei a fazer gambiarra :(

          if(tipo == 'P' || tipo == 'p')
          {
              printf("Informe o salario: ");
              scanf("%f", salario);
              salarioprof = salario + salarioprof;
              profs++;
          }
          if(tipo == 'e' || tipo == 'E')
          {
            do
            {
                printf("Informe o tipo (P = professor, E = estudante) ");
                setbuf(stdin, NULL);
                scanf("%c", &tipo);
                if(tipo == 'S' || tipo == 's' || tipo == 'N' || tipo == 'n')
                {
                    valid2 = 1;
                }
                else
                {
                    valid2 = 0;
                }

            }while(valid2 == 0);   // mesma situação
            if(tipo == 'S' || tipo == 's')
            {
                contmesada++;
            }
            else if(tipo == 'S' || tipo == 's')
            {
                nmesada++;
            }

            media = salarioprof / profs;

            printf("\nMedia salarial dos professore: %.2f", media);
            printf("\nNumero de estudantes que recebem mesada: %d", contmesada);
            printf("\nNumero de estudantes que nao recebem mesada: %d", nmesada);


          vezes++;
          }
        }while(vezes<=5);












        printf("\nDeseja repetir a execucao do programa? (S/s)");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
    }
    while(opcao == 's' || opcao == 'S');

    return 0;
}
