#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int Soma ( int num );


int main()
{
    int user_num,result;
    scanf("%i",&user_num);

    if  ( user_num < 0 ) // numeros negativos
    {
        user_num = -user_num; // trocar sinal
    }

    result = Soma(user_num);
    printf("%i \n",result);
    
    return 0;
}

int Soma ( int num )
{
    if  ( num == 1 )
    {
        return 1;
    }
    else
    {
        return num + Soma( num - 1);
    }
}