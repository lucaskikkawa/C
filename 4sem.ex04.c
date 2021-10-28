#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Ler_Num_Matriz ( int *soma_diag_princ, int *soma_diag_sec, 
int linha, int coluna, int m[linha][coluna] );

int main()
{
    int lin = 3, col = 3;
    int matriz[lin][col];
    int soma_diag_princ = 0, soma_diag_sec = 0;
    int *pSoma_diag_princ = &soma_diag_princ;
    int *pSoma_diag_sec = &soma_diag_sec;
    Ler_Num_Matriz(pSoma_diag_princ,pSoma_diag_sec,lin,col,matriz);
    printf("Soma diagonal principal: %i \n",soma_diag_princ);
    printf("Soma diagonal secundaria: %i \n",soma_diag_sec);

    return 0;
}

int Ler_Num_Matriz ( int *soma_diag_princ, int *soma_diag_sec, 
int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            scanf("%i",&m[i][j]);
            if  ( i == j ) // diag principal
            {
                *soma_diag_princ += m[i][j];                
            }
            
            if  ((i + j) == (linha - 1)) // diag secundaria , linha || coluna
            {
                *soma_diag_sec += m[i][j];
            }
        }  
    }
    return 0;
}

/*
linha 35 else if nao funciona em m[1][1].
Visto que 1 == 1 e 1+1 == 3-1, por isso 
tem que entrar nas duas condicoes
*/