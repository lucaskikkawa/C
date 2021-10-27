#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Preencher_Matriz_0_Diagonal_1 ( int linha, int coluna, int m[linha][coluna] );

int main()
{
    int linha_matriz = 0, coluna_matriz = 0;
    printf("Digite o tamanho da matriz: \n");
    scanf("%i",&linha_matriz);
    coluna_matriz = linha_matriz; // linha = coluna, enunciado
    int matriz [linha_matriz][coluna_matriz];
    Preencher_Matriz_0_Diagonal_1(linha_matriz,coluna_matriz,matriz);
    Imprimir_Matriz(linha_matriz,coluna_matriz,matriz);
     
    
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
        printf("\n"); // mudar linha   
    }

    return 0;
}

int Preencher_Matriz_0_Diagonal_1 ( int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            if  (  i == j )
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }
        }  
    }
    return 0;
}