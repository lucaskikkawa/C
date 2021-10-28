#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Ler_Num_Matriz (int *maior_10, int *menor_10, 
int linha, int coluna, int m[linha][coluna] );


int main()
{
    int linha = 4, coluna = 4;
    int matriz [linha][coluna];
    int qtd_maior_10 = 0;
    int qtd_menor_10 = 0;
    int *pMaior = &qtd_maior_10;
    int *pMenor = &qtd_menor_10;
    Ler_Num_Matriz(pMaior,pMenor,linha,coluna,matriz);
    printf("Qtd. > 10: %i\n",qtd_maior_10);
    printf("Qtd. < 0: %i\n",qtd_menor_10);
    
    return 0;
}

int Ler_Num_Matriz ( int *maior_10, int *menor_10, 
int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            scanf("%i",&m[i][j]);
            if  ( m[i][j] > 10)
            {
                *maior_10 = *maior_10 + 1;
            }
            else if ( m[i][j] < 0 )
            {
                *menor_10 = *menor_10 + 1;
            }

        }  
    }
    return 0;
}