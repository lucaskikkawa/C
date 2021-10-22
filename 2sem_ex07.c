#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num_linhas,num_total=1;
    printf("Digite um numero: \n");
    scanf("%d",&num_linhas);

    for(int y = 0 ; y< num_linhas ; y++)
    {
        for(int i = 0 ; i<= y ; i++ )
        {
            printf("%d ",num_total);
            num_total++;
        }
        printf("\n");    
    }

}