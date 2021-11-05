#include <stdio.h>
#include <stdlib.h>


/* PROTOTYPES */
int Elevado_Cubo ( int num );


int main()
{
    int user_num,result;
    scanf("%i",&user_num);
    
    if  ( user_num < 0 ) // numeros negativos
    {
        user_num = -user_num; // trocar sinal
    }

    result = Elevado_Cubo(user_num);
    printf("%i \n",result);

    return 0;
}

int Elevado_Cubo  ( int num )
{
    if  ( num == 1 )
    {
        return 1;
    }
    else
    {
        return num*num*num + Elevado_Cubo(num-1);
    }
}