#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Soma_Vetor ( int tam, int v[tam], int i, int soma );
int Preencher_Vetor ( int tam, int v[tam] );


int main()
{
    int tam = 4;
    int v[tam];
    int iterator = 0;
    int soma_total = 0;
    int result;
    Preencher_Vetor(tam,v);
    result = Soma_Vetor(tam,v,iterator,soma_total);
    printf("%i \n",result);


    
    return 0;
}

int Soma_Vetor ( int tam, int v[tam], int i, int soma)
{
    if  ( i > tam - 1 ) // indice vetor 
    {
        return soma; // sai recursao
    }
    else
    {   
        soma += v[i];
        return  Soma_Vetor(tam,v, i + 1,soma);
    }

}

int Preencher_Vetor ( int tam, int v[tam] )
{
    for (int i = 0; i < tam; i++ )
    {
        scanf("%i",&v[i]);
    }
    
    return 0;
}
