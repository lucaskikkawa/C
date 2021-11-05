#include <stdio.h>
#include <stdlib.h>

/*
QUESTÂO

Escreva uma função recursiva que receba por parâmetro DOIS 
valores inteiros x e y e calcule e retorne o resultado de xy 
para o programa principal.
*/

/* PROTOTYPES */
int Potencia ( int x, int y );


int main()
{
    int x,y;
    int result;
    scanf("%i",&x);
    scanf("%i",&y);

    result = Potencia(x,y);
    printf("%i \n",result);
    
    return 0;
}

int Potencia ( int x, int y )
{
    if ( y == 0)
    {
        return 1;
    }
    else
    {
        return x * Potencia(x,y-1);
    }
}