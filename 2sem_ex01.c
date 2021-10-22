#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Digite um valor: \n");
    scanf("%d",&n);
    Imprimir_cresc(n);
    printf("\n");
    Imprimir_decresc(n);
}

void Imprimir_decresc(int num){
    for( ; num >= 0; num--){
        printf("%d ",num);
    }
}

void Imprimir_cresc(int num){
    for(int i=0; i <= num; i++){
        printf("%d ",i);
    }
}