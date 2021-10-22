#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int verifica ();


int main()
{
    int num_sem;
    num_sem = verifica();
    if  ( num_sem == 1 )
    {
        printf("Domingo");
    }
        else if  ( num_sem == 2 )
        {
            printf("Segunda-feira");
        }
            else if  ( num_sem == 3 )
            {
                printf("Terça-feira");
            }
                else if  ( num_sem == 4 )
                {
                    printf("Quarta-feira");
                }
                    else if  ( num_sem == 5 )
                    {
                        printf("Quinta-feira");
                    }
                        else if  ( num_sem == 6 )
                        {
                            printf("Sexta-feira");
                        }
                            else
                            {
                                printf("Sabado");
                            }
    return 0;
}

int verifica ()
{
    int num;
    int saida = 0; 
    while ( saida == 0 )
    {
        printf("Digite um numero: \n");
        scanf("%d",&num);
        if  ( num > 7 || num < 1 )
        {
            printf("O numero deve ser >=1 e <=7!\n");
        }
        else
        {
            saida = 1;
        }
    }
    return num;
}

