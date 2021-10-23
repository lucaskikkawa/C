#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int ler_num_matriz ( int linha, int coluna, int m[linha][coluna] );
int maior_menor ( int linha, int coluna , int m[linha][coluna] );

int ler_num_matriz ( int linha, int coluna, int m[linha][coluna])
{
    for (int i = 0; i < linha; i++ ) // percorre a linha
    {
        for ( int j = 0 ; j < coluna ; j++ ) // percorre a coluna
        {
            //printf("Digite um numero para a posicao [%i][%i] \n",i,j);
            scanf("%i",&m[i][j]);
        }  
    }
    return 0;
}

int maior_menor (  int linha, int coluna , int m[linha][coluna] )
{
    int maior = m[0][0],menor = m[0][1]; // valores base comparacao
    int lin_maior,col_maior,lin_menor,col_menor;
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            if  ( m[i][j] > maior ) // verifica se a posicao atual eh maior que 
            {                        // a posicao base
                maior = m[i][j]; // troca valores
                lin_maior = i;
                col_maior = j;
            }
            else if  ( m[i][j] < menor ) // verifica se a posicao atual eh menor que
            {                             // a posicao base
                menor = m[i][j]; // troca valores
                lin_menor = i;
                col_menor = j;
            }
        }  
    }
    printf("Maior: %i \n",maior);
    printf("Posicao (maior): %i linha e %i coluna \n",lin_maior,col_maior);
    printf("Menor: %i \n",menor);
    printf("Posicao (menor): %i linha e %i coluna \n",lin_menor,col_menor);
    return 0;
}

int main()
{
    int lin = 3, col = 3;
    int matriz[lin][col];
    ler_num_matriz(lin,col,matriz);
    maior_menor(lin,col,matriz);
    return 0;
}