#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Calcular_Soma_Abaixo_Diag_Princ ( int *soma, int linha, int coluna, 
int m[linha][coluna] );


int main()
{
    int linha = 4, coluna = 4;
    int matriz [linha][coluna];
    int soma_abaixo_diag_princ = 0;
    int *pSoma = &soma_abaixo_diag_princ;

    Ler_Num_Matriz(linha,coluna,matriz);
    Calcular_Soma_Abaixo_Diag_Princ(pSoma,linha,coluna,matriz);

    printf("Soma: %i \n",soma_abaixo_diag_princ);
    
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

int Calcular_Soma_Abaixo_Diag_Princ ( int *soma, int linha, int coluna, 
int m[linha][coluna] )
{   
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            if  ( i > j )
            {
                *soma += m[i][j];
            }
        }

    }

    return 0;
}