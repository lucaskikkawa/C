#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

Crie um programa que leia uma MATRIZ 4 x 4 e diga 
se ela é uma matriz triangular superior, 
triangular inferior, matriz diagonal ou se 
não se enquadra. Para isso, as seguintes mensagens devem ser impressas:

+ Matriz Triangular Superior!!!
+ Matriz Triangular Inferior!!!
+ Matriz Diagonal!!!
+ Nao se Enquadra!!!

PS - Gostei desse exercicio, um bom desafio.
*/

/* PROTOTYPES */
int Preencher_Matriz ( int linha, int coluna, int m[linha][coluna] );
int Verificar_Matriz ( int linha, int coluna, int m[linha][coluna],
int tam, int sup[tam], int inf[tam] );


int main()
{
    int linha = 4, coluna = 4;
    int tam = 6;
    int matriz[linha][coluna];
    int vetor_superior[tam]; // armazenar valores acima diag princ
    int vetor_inferior[tam]; // armazenar valores abaixo diag princ
    Preencher_Matriz(linha,coluna,matriz);
    Verificar_Matriz(linha,coluna,matriz,tam,
    vetor_superior,vetor_inferior);

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

int Verificar_Matriz ( int linha, int coluna, int m[linha][coluna],
int tam, int sup[tam], int inf[tam] )
{   
    int k = 0,l = 0; // iterator inf e sup
    for ( int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            if  ( i > j ) // adiciona ao vetor diag sup
            {
                sup[l] = m[i][j];
                l++;
            }
            else if  ( j > i ) // adiciona ao vetor diag inf
            {
                inf[k] = m[i][j]; 
                k++;              
            }
        }

    }


    // verificar se eh triang sup, triang inf, matriz diag ou nenhum
    int triang_sup = 1, triang_inf = 1;
  
    for ( int i = 0 ; i < tam - 1 ; i++ ) // percorre vetor superior
    {
        if  ( sup[i] != 0 )
        {
            triang_sup = 0;
        }
    }

    for ( int j = 0 ; j < tam - 1 ; j++ ) // percorre vetor inferior
    {
        if  ( inf[j] != 0 )
        {
            triang_inf = 0;
        }
    }

    // imprimir resultado

    if  ( triang_sup == 1 && triang_inf == 0 )
    {
        printf("Matriz Triangular Superior!!! \n");
    }
    else if  ( triang_sup == 0 && triang_inf == 1 )
    {
        printf("Matriz Triangular Inferior!!! \n");
    }
    else if  ( triang_sup == 1 && triang_inf == 1 )
    {
        printf("Matriz Diagonal!!! \n");
    }
    else
    {
        printf("Nao se Enquadra!!! \n");
    }  

    
}



