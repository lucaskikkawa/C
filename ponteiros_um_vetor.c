#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int imprimir_num ( int v[], int tam_v );
int ler_num ( int v[], int tam_v );
//LER UM VETOR E IMPRIMIR UM VETOR

int ler_num ( int v[], int tam_v )
{
    //**v[] = malloc(tam_v * sizeof(int));
    for (int i = 0; i < tam_v; i++ )
    {
        printf("Digite um numero: \n");
        scanf("%d",&v[i]);
    }
    return 0;
}

int imprimir_num ( int v[], int tam_v )
{
    //**v[] = malloc(tam_v * sizeof(int));
    for ( int i = 0; i < tam_v; i++ )
    {
        printf("%d\n",v[i]);    
    }
    return 0;
}

int main()
{
    int vetor[10];
    int tam = 10;
    ler_num(vetor,tam);
    imprimir_num(vetor,tam);
    
    return 0;
}