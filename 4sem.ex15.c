#include <stdio.h>
#include <stdlib.h>

/*
QUESTAO

A multiplicação de dois números inteiros pode ser feita 
através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2).
Crie uma função recursiva que calcule a multiplicação por somas
sucessivas de DOIS inteiros.
*/

/* PROTOTYPES */
int Soma ( int num, int mult );


int main()
{
    int base, cont;
    int result;
    
    scanf("%i",&base);
    scanf("%i",&cont);

    result = Soma(base,cont);
    
    printf("%i \n",result);


    return 0;
}

int Soma ( int num, int mult )
{
    if  ( mult == 0 )
    {
        return 0;
    }
    else
    {
        return num + Soma (num, --mult);
    }
}