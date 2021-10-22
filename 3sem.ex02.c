#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int ler_num ( int v[], int num);
int imprimir_num ( int v[], int num ); 
float calc_media ( int v[], int num);


int ler_num ( int v[], int num )
{
    for (int i = 0; i < num; i++ )
    {
        //printf("Digite um numero: \n");
        scanf("%d",&v[i]);

    }

    return 0;
}

int imprimir_num ( int v[], int num )
{
    for ( int i = 0; i < num; i++ )
    {
        printf("%d ",v[i]);    
    }

    return 0;
}

float calc_media ( int v[], int num)
{
    float cont = 0;
    for ( int i = 0 ; i < num; i++ )
    {
        cont += v[i];
    }
    return cont / num;
}

int main()
{
    int vetor[5];
    float media;
    size_t tam = sizeof(vetor)/sizeof(vetor[0]);
    ler_num(vetor,tam);
    imprimir_num(vetor,tam);
    media = calc_media(vetor,tam);
    printf("%.2f \n",media);
    return 0;
}