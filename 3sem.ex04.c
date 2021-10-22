#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int ler_num ( int v[], int num);
int verif_pos_x (int v[], int num);
int verif_pos_y (int v[], int num);

int ler_num ( int v[], int num )
{
    for (int i = 0; i < num; i++ )
    {
        printf("Digite um numero: \n");
        scanf("%d",&v[i]);

    }

    return 0;
}

int verif_pos_x ( int v[], int num )
{
    int x;
    int saida_x = 0;
    while ( saida_x == 0 )
    {
        printf("Digite um valor para x: \n");
        scanf("%d",&x);
        if  ( x < 0 || x >= 8 )
        {
            printf("Valor de X invalido!\n");
        }
        else
        {
            saida_x = 1;
        }
    }
    return v[x];
}

int verif_pos_y ( int v[], int num )
{
    int y;
    int saida_y = 0;
    while ( saida_y == 0 )
    {
        printf("Digite um valor para y: \n");
        scanf("%d",&y);
        if  ( y < 0 || y >= 8 )
        {
            printf("Valor de Y invalido!\n");
        }
        else
        {
            saida_y = 1;
        }
    }
    return v[y];
}
int main()
{
    int vetor[8];
    int x = 0,y = 0;
    ler_num(vetor,8);
    size_t tam = sizeof(vetor)/sizeof(vetor[0]);
    x = verif_pos_x(vetor,tam);
    y = verif_pos_y(vetor,tam);
    printf("Soma eh: %d\n",x+y); 
    return 0;
}