#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    int soma_div = 0;
    printf("Digite um numero inteiro: \n");
    scanf("%d",&num);
    for (int i=1; i< num; i++){
        if (num % i == 0){ // eh um divisor
            soma_div += i;
        }
    }
    printf("%d",soma_div);
}