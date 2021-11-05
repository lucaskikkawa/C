#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

Implemente um algoritmo que LEIA DUAS Matrizes 2x2
e retorne a SOMA das matrizes.
*/

/* PROTOTYPES */
int Soma_Matriz ( int linha, int coluna, // soma
int m1[linha][coluna], int m2[linha][coluna], int soma[linha][coluna] );
int Preencher_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] );

int main()
{
    int linha = 2, coluna = 2;
    int matriz_1 [linha][coluna];
    int matriz_2 [linha][coluna];
    int matriz_soma [linha][coluna];
    
    Preencher_Matriz(linha,coluna,matriz_1);
    Preencher_Matriz(linha,coluna,matriz_2);

    Soma_Matriz(linha,coluna,matriz_1,matriz_2,matriz_soma);

    Imprimir_Matriz(linha,coluna,matriz_soma);

    return 0;
}

int Soma_Matriz ( int linha, int coluna, 
int m1[linha][coluna], int m2[linha][coluna],int soma[linha][coluna] )
{
     for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            soma[i][j] = m1[i][j] + m2[i][j];
        }  
    }
}

int Preencher_Matriz ( int linha, int coluna, int m[linha][coluna] )
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

int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] )
{
    for ( int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            printf("%i ",m[i][j]);
        }
        printf("\n");    
    }

    return 0;
}