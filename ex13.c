#include <stdio.h>
#include <stdlib.h>

void main()
{
    float a,b,c;
    printf("Digite os tres lados do triangulo: \n");
    scanf("%f %f %f",&a,&b,&c);
    if (a <= 0 || b <= 0 || c <= 0)
        printf("Entrada INVALIDA!");
    else if (a != b && b != c && c != a)
            printf("Triangulo ESCALENO!");
        else if (a == b && b == c && c == a)
                printf("Triangulo EQUILATERO!");
            else
                printf("Triangulo ISOSCELES!");


        
}