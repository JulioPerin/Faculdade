// Grava elementos no vetor
void gerarVetorde0aLimite(int limite, int maximo, int vetor[])
{
    int i;

    srand(time(NULL));

    for(i=0; i<maximo; i++)
    {
        vetor[i] = (rand() % (limite+1));
    }
}


void mostrarVetor(int maximo, int vetor[]) // exer1
{
    int i, contimp=0, contpar=0, p=0, q=0;

    printf("===Vetor Completo===\n");

    for(i=0; i<maximo; i++)// contar pares e impares
    {
        printf("%d  ", vetor[i]);
        if(vetor[i]%2==0)
        {
            contpar++;
        }
        if(vetor[i]%2!=0)
        {
            contimp++;
        }
    }

    i=0;
    int par[contpar];
    int impar[contimp];


    for(i=0; i<maximo; i++)
    {
        if(vetor[i]%2==0) //Armazenar vetor par e impar
        {
            par[p] = vetor[i];
            p++;
        }
        if(vetor[i]%2!=0)
        {
            impar[q] = vetor[i];
            q++;
        }
    }
    i=0;


    printf("\n===Vetor par===\n");

    for(i=0; i<contpar; i++) // imprimir vetores
    {
         printf("%d  ", par[i]);
    }

    printf("\n===Vetor impar===\n");

    for(i=0; i<contimp; i++)
    {
         printf("%d  ", impar[i]);
    }
}

void mostrarVetor2(int maximo, int vetor[])//exer2
{
    int i, dobro[maximo];

    printf("===VETOR A===\n");
    for(i=0; i<maximo; i++) //Armazenar dobro
    {
        printf("%d  ", vetor[i]);
        dobro[i] = vetor[i] * 2;
    }
    i=0;
    printf("\n===VETOR A===\n"); //imprimir o dobro
    for(i=0; i<maximo; i++)
    {
        printf("%d  ", dobro[i]);
    }
}

void mostrarVetor3(int maximo, int vetor[])//exer4
{
    int i, dobro[maximo];

    printf("===VETOR A===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);
    }
    i=0;
    printf("\n===VETOR ===\n");
    for(i=(maximo-1); i>=0; i--) // imprimir ao contrario
    {
        printf("%d  ", vetor[i]);
    }
}

void mostrarVetor4(int maximo, int vetor[])//exer3
{
    int i;

    printf("===VETOR A===\n");
    for(i=0; i<maximo; i++)//imprimir vetor normal
    {
        printf("%d  ", vetor[i]);
    }
    i=0;
    printf("\n===VETOR B===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i] * i);
    }
}

void mostrarVetor5(int maximo1, int vetor1[], int maximo2, int vetor2[])//exer5
{
    int i, tamanho;

    printf("===VETOR A===\n");
    for(i=0; i<maximo1; i++)//imprimir vetor normal
    {
        printf("%d  ", vetor1[i]);
    }
    i=0;
    printf("\n===VETOR B===\n");//imprimir segundo vetor normal
    for(i=0; i<maximo2; i++)
    {
        printf("%d  ", vetor2[i]);
    }

    if(maximo1>maximo2) // validar qual é o maior vetor
    {
        tamanho = maximo1;
    }
    else if(maximo1<maximo2)
    {
        tamanho = maximo2;
    }
    i=0;

    int vetor3[tamanho];

    for(i=0; i<tamanho; i++)
    {
        if(vetor1[i] > vetor2[i])//validar qual é numero é maior
        {
            vetor3[i] = 1;
        }
        if(vetor1[i] < vetor2[i])
        {
            vetor3[i] = -1;
        }
        if(vetor1[i] == vetor2[i])
        {
            vetor3[i] = 0;
        }
    }
    i=0;
    printf("\n===VETOR C===\n");
    for(i=0; i<tamanho; i++) // imprimir vetor c
    {
         printf("%d  ", vetor3[i]);
    }

}

void gerarVetorde0aLimite1(int limite, int maximo1, int vetor1[], int maximo2, int vetor2[] )//exer5
{
    int i;

    srand(time(NULL));

    for(i=0; i<maximo1; i++)
    {
        vetor1[i] = (rand() % (limite+1)) + 1;
    }

    i=0;

    for(i=0; i<maximo2; i++)
    {
        vetor2[i] = (rand() % (limite+1)) + 1;
    }
}

void mostrarVetor6(int maximo, int vetor[])//exer6
{
    int i, somamenor100=0, cont100=0, contmaior100=0, somamaior100;

    printf("===VETOR===\n");
    for(i=0; i<maximo; i++)//imprimir vetor normal
    {
        printf("%d  ", vetor[i]);

        if(vetor[i]<100) //validar numeros maiores, iguais ou menores que 100
        {
            somamenor100 = somamenor100 + vetor[i];
        }
        if(vetor[i]==100)
        {
            cont100++;
        }
        if(vetor[i]>100)
        {
            contmaior100++;
            somamaior100 = somamaior100 + vetor[i];
        }
    }
    printf("\nSoma dos valores menores que 100 eh: %d", somamenor100);
    printf("\nQuantidade de valores iguais a 100: %d", cont100);
    printf("\nMedia dos valores maiores que 100 eh: %.2f", ((float)somamaior100/contmaior100));



}

void gerarVetorInteiroComLimite(int limite, int maximo, int vetor[])//exer7
{
    int i, menor=45, maior=5, somatemp=0, conttemp=0, cont=0;
    float media;

    srand(time(NULL));

    for(i=0; i<maximo; i++)//gerar vetor
    {
        vetor[i] = (rand() % (limite)+5);
    }
    i=0;

    printf("===Vetor===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d\t ", vetor[i]);

        if(vetor[i]<menor)
        {
            menor = vetor[i];
        }
        if(vetor[i]>maior)
        {
            maior = vetor[i];
        }
        somatemp = somatemp + vetor[i];
        conttemp++;
    }

    media = (float)somatemp/conttemp;
    printf("\n\nMenor temperatura ocorrida: %d", menor);
    printf("\nMaior temperatura ocorrida: %d", maior);
    printf("\nTemperatura media: %.2f", media);
    i=0;

    for(i=0; i<maximo; i++)
    {
        if(vetor[i]>media)
        {
            cont++;
        }
    }
    printf("\nDias abaixo da temperatura media: %d", cont);
}

void mostrarVetor7(int maximo, int vetor[])//exer8
{
    int i, vetorB[100], cont=0, k=0;

    printf("===VETOR A===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d  ", vetor[i]);
        if(vetor[i] == 0) //Se a possição "i" for um numero 0 ele incrementa o numero de 0s
        {
            cont++;
        }
        if(vetor[i+1] != 0)//Se a posição "i+1" não for zero, coloca o numero de 0 na posição "K" do vetor, incrementa em 1 e reseta o contado de 0s
        {
            if(cont!=0)
            {
                vetorB[k] = cont;
                k++;
                cont=0;
            }
        }
    }
    i=0;

    printf("\n===VETOR B===\n");
    for(i=0; i<100; i++)
    {
        if(vetorB[i]>14) //evita que pegue lixo de memoria
        {
            break;
        }
        else{
        printf("%d ", vetorB[i]);
    }
    }
}

void somarVetorInteiro(int maximo, int vetor[])//exer9
{
    int i, cont=0, somavet=0;

    printf("===Vetor===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d ", vetor[i]);
        cont++;
        somavet = somavet + vetor[i];
    }
    printf("\nMedia: %.2f", (float)somavet/cont);
}

void mostrarVetor8(int maximo, int vetor[])//exer10
{
    int i, menor=100, posmenor;

    printf("===Vetor===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d ", vetor[i]);
        if(vetor[i]<menor)
        {
            menor = vetor[i];
            posmenor=i;
        }
    }
    printf("\n\nMenor valor eh %d e fica na posiçao %d", menor, posmenor );
}


void mostrarVetor9(int maximo, int vetor[])//exer11
{
    int i, vetorB[30], k=0;

    printf("===Vetor A===\n");
    for(i=0; i<maximo; i++)
    {
        printf("%d ", vetor[i]);
        if(vetor[i]!=0)
        {
            vetorB[k]= vetor[i];
            k++;
        }
    }

    i=0;
    printf("\n===Vetor B===\n");
    for(i=0; i<maximo; i++)
    {
        if(vetorB[i]!=0)
        {
            printf("%d ", vetorB[i]);
        }
    }

}

void gerarVetorde0aLimite2(int limite, int maximo, int vetor[]) // exer11
{
    int i;

    srand(time(NULL));

    for(i=0; i<maximo; i++)
    {
        vetor[i] = (rand() % limite);
    }
}
