#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

Implemente um algoritmo RECURSIVO que LEIA um vetor de inteiros 
com n posições (n definido pelo usuário). Após o usuário 
inserir elementos no vetor, o algoritmo deve imprimir os 
números armazenados na última até a primeira posição do vetor.
*/

/* PROTOTYPES */
int Imprimir_Vetor_Ultima_Primeira ( int tam, int v[tam] );
int Ler_vetor ( int tam, int v[tam], int i );


int main()
{
    int tam;
    int iterator = 0;
    scanf("%i",&tam);
    int vetor[tam];

    Ler_vetor(tam,vetor,iterator);
    Imprimir_Vetor_Ultima_Primeira(tam,vetor);

    
    return 0;
}

int Imprimir_Vetor_Ultima_Primeira ( int tam, int v[tam] )
{
    for ( int i = tam - 1; i >= 0; i-- )
    {
        printf("%i ",v[i]);    
    }
    printf("\n");

    return 0;
}

int Ler_vetor ( int tam, int v[tam], int i )
{
    if  ( i == tam )
    {
        return 0;
    }
    else
    {
        scanf("%i",&v[i]);
        return Ler_vetor(tam,v,++i);
    }
}