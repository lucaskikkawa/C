#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Ler_Num_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Calcular_Soma_Not_Diag_Princ_Sec ( int *soma, int linha, int coluna, 
int m[linha][coluna] );


int main()
{
    int linha = 4, coluna = 4;
    int matriz [linha][coluna];
    int soma_not_diag_princ_sec = 0;
    int *pSoma = &soma_not_diag_princ_sec;

    Ler_Num_Matriz(linha,coluna,matriz);
    Calcular_Soma_Not_Diag_Princ_Sec(pSoma,linha,coluna,matriz);

    printf("Soma: %i \n",soma_not_diag_princ_sec);
    
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

int Calcular_Soma_Not_Diag_Princ_Sec ( int *soma, int linha, int coluna, 
int m[linha][coluna] )
{   
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            if  ( !(i == j) && !( (i+j) == (linha - 1)) )
            {
                *soma += m[i][j];
            }
        }

    }

    return 0;
}