#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Digite um valor inteiro: \n");
    scanf("%d",&dia);
    switch (dia)
    {
        case 1:   // Tem que colocar 1 e não '1' pq ai ele acha que é char/string
            printf("Domingo!");
            break;
        
        case 2:
            printf("Segunda-feira!");
            break;
        
        case 3:
            printf("Terca-feira!");
            break;
        
        case 4:
            printf("Quarta-feira!");
            break;
        
        case 5:
            printf("Quinta-feira!");
            break;
        
        case 6:
            printf("Sexta-feira!");
            break;
        case 7:
            printf("Sabado!");
            break;
        
        default:
            printf("Numero Invalido!");
    }
    return 0; 
}
