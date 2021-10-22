#include <stdio.h>
#include <stdlib.h>

void verificar(int *a){
    int saida = 0; // 0 = false, 1 = true
    while( saida == 0 ){
        if (*a<=0){
            printf("O numero deve ser >=0!\n");
            //printf("Digite um outro valor: \n");
            scanf("%d",&*a);
        }
        else{
            saida = 1;
        }
    }
}

void Imprimir_decresc(int num){
    for( ; num >= 0; num--){
        printf("%d ",num);
    }
}


void main()
{
    int n;
    //printf("Digite um valor: \n");
    scanf("%d",&n);
    verificar(&n);
    Imprimir_decresc(n);
    printf("FIM!");
}