#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Imprimir_cresc ( int num, int i );


int main()
{
    int user_num;
    int iterator = 0;
    scanf("%i",&user_num);
    Imprimir_cresc(user_num,iterator);
    
    return 0;
}

int Imprimir_cresc ( int num, int i)
{
    printf("%i ",i);
    if ( i == num)
    {
        return 0; // sai recursao
    }
    else
    {
        return Imprimir_cresc(num, i + 1); // continua recursao
    }
}