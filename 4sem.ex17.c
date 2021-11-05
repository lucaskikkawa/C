#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

Crie um algoritmo que IMPRIMA na tela recursivamente
a Série de Fibonacci até o elemento de número n informado.
*/

/* PROTOTYPES */
int Fibonacci ( int num );
/* 
retorna um valor, ultima posicao da sequencia fibonnaci

E.G. Fibonacci (4);
1, 1, 2, *3* <- retorna 3
*/

int main()
{
    int num_seq;
    scanf("%i",&num_seq);
    
    for(int i = 0; i < num_seq ;i++) 
    {
      printf("%i ",Fibonacci(i));            
    }

    return 0;
}

int Fibonacci (int num)
{
    if(num == 0 || num == 1) // ponto de parada
    {
      return 1;
    }
    else 
    {
      return (Fibonacci(num-1) + Fibonacci(num-2));
    }
}