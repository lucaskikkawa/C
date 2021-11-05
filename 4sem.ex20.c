#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

Implemente um algoritmo que calcule a TRANSPOSTA de uma Matriz. 
Para isso, o algoritmo deve receber, como entrada, a quantidade de 
LINHAS e COLUNAS e os ELEMENTOS da matriz.

OBS: Gostei dessa questao também. 
Eu poderia ter dado uma refatorada nas variaveis
*/

/* PROTOTYPES */
int Preencher_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Transposicao_Matriz ( int linha, int coluna, 
int linha_trans, int coluna_trans, int m[linha][coluna], 
int trans[linha_trans][coluna_trans] );

int main()
{
    int linha, coluna;
    scanf("%i %i",&linha,&coluna);
    int linha_trans = coluna, coluna_trans = linha;

    int matriz [linha][coluna];
    int matriz_transposta [linha_trans][coluna_trans];

    Preencher_Matriz(linha,coluna,matriz);
    Transposicao_Matriz(linha,coluna,linha_trans,coluna_trans,
    matriz,matriz_transposta);
    Imprimir_Matriz(linha_trans,coluna_trans,matriz_transposta); // matriz transposta

    return 0;
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

int Transposicao_Matriz ( int linha, int coluna, 
int linha_trans, int coluna_trans, int m[linha][coluna], 
int trans[linha_trans][coluna_trans] )
{
    for ( int i = 0; i < linha_trans; i++ )
    {
        for ( int j = 0 ; j < coluna_trans ; j++ )
        {
            trans[i][j] = m[j][i];
        }    
    }
}