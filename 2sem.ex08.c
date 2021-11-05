#include <stdio.h>
#include <stdlib.h>

float Fatorial ( int num )
{
    int soma_total=1;
    for(int i = 1 ; i<= num ; i++)
    {
        soma_total *= i;
    }
    return soma_total;      
}

float Soma ( int num )
{
    float soma_total=0;
    for(int i=1 ; i <= num ; i++)
    {
        soma_total += (1 / Fatorial(i));
    }
    return soma_total;        
}

int main()
{
    int num;
    float resultado;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    resultado = Soma(num);
    printf("%f",resultado);
    return 0;

}