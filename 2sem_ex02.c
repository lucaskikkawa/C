#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Digite um valor: \n");
    scanf("%d",&n);
    impares(n);
    printf("\n");
    pares(n);
}

void impares(int num){
    for(int i=0 ; i<=num ; i++){
        if( i%2 == 1){
            printf("%d ",i);
        };
    }
}

void pares(int num){
    for(int i=0 ; i<=num ; i++){
        if( i%2 == 0){
            printf("%d ",i);
        };
    }
}

int nome [2][3];