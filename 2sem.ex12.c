#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
void Operacao ( float n, float n_2, char simb );


int main()
{
    float num,num_2;
    char oper;
    printf("Digite um numero: \n");
    scanf("%f",&num);
    printf("Digite outro numero: \n");
    scanf("%f",&num_2);
    printf("Digite a operacao desejada: \n");
    scanf(" %c",&oper);   //scanf("%c",&oper); nao funciona, ele da um break
    Operacao(num,num_2,oper);
    return 0;
}

void Operacao ( float n,float n_2,char simb )
{
    if  ( simb == '+' ) // tem que usar 'value' ao inves de "value" 
    {
        printf("%f",n + n_2);
    }
    else if  ( simb == '-' )
    {
        printf("%f",n - n_2);
    }
    else if  ( simb == '*' )
    {
        printf("%f",n * n_2);
    }
    else if  ( simb == '/' )
    {
        printf("%f", n / n_2);
    }
}