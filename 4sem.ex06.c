#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] );

int Calcular_Soma_Coluna ( int v[], int linha, int coluna, 
int m[linha][coluna] );

int Imprimir_Vetor ( int tam, int v[tam] );

int main()
{
    int linha = 3, coluna = 3;
    int matriz [linha][coluna];
    int tam = 3;
    int vetor[tam];
    int *pVetor = vetor;

    Ler_Num_Matriz(linha,coluna,matriz);
    Calcular_Soma_Coluna(pVetor,linha,coluna,matriz);
    Imprimir_Vetor(tam,vetor);

    return 0;
}

int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            scanf("%i",&m[i][j]);
        }  
    }
    return 0;
}

int Calcular_Soma_Coluna ( int v[], int linha, int coluna, 
int m[linha][coluna] )
{   // percorre primeiro uma coluna, depois muda de coluna
    int soma_coluna = 0;
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            soma_coluna += m[i][j];
        }

        v[j] = soma_coluna;
        soma_coluna = 0; // reset somatorio    
    }

    return 0;
}

int Imprimir_Vetor ( int tam, int v[tam] )
{
    for ( int i = 0; i < tam; i++ )
    {
        printf("%i ",v[i]);    
    }
    printf("\n");

    return 0;
}