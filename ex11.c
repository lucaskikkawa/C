#include <stdio.h>
#include <stdlib.h>

void main()
{
    int operacao,a,b;
    double div_a,div_b;
    printf("Digite 1 para Soma, 2 para Subtracao, 3 para Divisao e 4 para Multiplicacao:\n");
    scanf("%d",&operacao);
    switch (operacao)
    {
        case 1:
            scanf("%d %d",&a,&b);
            printf("O resultado da soma eh: %d",a+b);
            break;
        case 2:
            scanf("%d %d",&a,&b);
            printf("O resultado da subtracao eh: %d",a-b);
            break;
        case 3:
            scanf("%lf %lf",&div_a,&div_b);
            printf("O resultado da divisao eh: %f",div_a/div_b);
            break;
        case 4:
            scanf("%d %d",&a,&b);
            printf("O resultado da multiplicacao eh: %d",a*b);
            break;
        default:
            printf("Numero Invalido!");
    }

}