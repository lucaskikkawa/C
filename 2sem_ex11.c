#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTYPES */



int main()
{
    double num,raiz,raiz_arrend;
    printf("Digite um numero: \n");
    scanf("%lf",&num);
    raiz = sqrt(num);
    raiz_arrend = round(raiz); // comparar para ver se é igual
    if  ( num >= 0 && raiz == raiz_arrend ) // 
    {
        printf("Eh um quadrado perfeito! \n");
    }
    else
    {
        printf("Nao eh um quadrado perfeito! \n");
    }
    
    return 0;
}