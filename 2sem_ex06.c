#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num,i=1;
    float resultado,acum=0;
    printf("Digite um numero \n");
    scanf("%d",&num);
    for( ; i<=num ; i++)
    {
        resultado = (float)1/i;
        acum += resultado;
    }
    printf("%.1f",acum);;
}