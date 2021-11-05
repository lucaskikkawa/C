#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int ler_num ( int v[], int tam_v, int v_par[], int v_impar[] );
int imprimir_num ( int v[], int tam_v );
//Criar uma funcao para limpar o v_par e v_impar (nem todas as posicoes)
// sao preenchidas.
// Criar um bubble sort 


int ler_num ( int v[], int tam_v, int v_par[], int v_impar[] )
{
    int j = 0, k = 0; // j iterator par, k iteraror impar
    for (int i = 0; i < tam_v; i++ )
    {
        printf("Digite um numero: \n");
        scanf("%d",&v[i]);
        if  ( v[i] % 2 == 0 ) // eh par
        {
            v_par[j] = v[i]; // adiciona o valor par para o v_par
            j++;
        }
        else // eh impar
        {
            v_impar[k] = v[i]; // adiciona o valor impara para o v_impar
            k++;
        }
    }
    return 0;
}

int imprimir_num ( int v[], int tam_v )
{+
    for ( int i = 0; i < tam_v; i++ )
    {
        printf("%d\n",v[i]);    
    }
    return 0;
}

int main()
{
    int vetor[10], vetor_par[10], vetor_impar[10];
    int tam = 10, tam_par = 10, tam_impar = 10;
    ler_num(vetor,tam,vetor_par,vetor_impar);
    imprimir_num(vetor,tam);
    imprimir_num(vetor_par,tam_par);
    imprimir_num(vetor_impar,tam_impar);
    
    return 0;
}