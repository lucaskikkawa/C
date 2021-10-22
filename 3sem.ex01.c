#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* PROTOTYPES */
int ler_num ( int v[], int num );
int imprimir_num ( int v[], int num ); 

int ler_num ( int v[], int num )
{
    for (int i = 0; i < num; i++  )
    {
        printf("Digite um numero: \n");
        scanf("%d",&v[i]);

    }

    return 0;
}

int imprimir_num ( int v[], int num )
{
    for ( int i = num-1; i >= 0; i-- )
    {
        printf("%d \n",v[i]);    
    }

    return 0;
}

int main()
{
    int vetor[6];
    size_t tam = 0;
    ler_num(vetor, 6);
    tam = sizeof(vetor)/sizeof(vetor[0]); // calcula tamanho do array
    imprimir_num(vetor, tam);

    return 0;
}

