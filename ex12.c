#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&a);
    if (a%2 == 0 && a!= 0)
        printf("Numero PAR!");
    else if (a%2 == 1)
        printf("Numero IMPAR!");
    else
        printf("Numero NEUTRO!");

}