#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTYPES */
int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] );

int main()
{
    
    int linha,coluna;
    
    printf("Digite o tamanho da linha na sua matriz: \n");
    scanf("%i",&linha);
    printf("Digite o tamanho da coluna na sua matriz: \n");
    scanf("%i",&coluna);

    int matriz [linha][coluna];

    Ler_Num_Matriz(linha,coluna,matriz);
    Imprimir_Matriz(linha,coluna,matriz);

    return 0;
}

int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] )
{   


    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            if  ( i < j )
            {
                m[i][j] = ( 2 * i ) + ( 7 * j ) - 2;
            }
            else if  ( i == j )
            {
                m[i][j] = ( 3 * pow( i, 2 ) - 1);
            }
            else
            {
                m[i][j] = ( 4 * pow( i, 3 )) + (5 * pow(j, 2) ) + 1;
            }
            
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