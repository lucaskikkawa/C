#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
float Conversor_fahr_cels ( float fahr );


int main()
{
    float num;
    printf("Digite um valor: \n");
    scanf("%f",&num);
    printf("%.2f", Conversor_fahr_cels(num) );
    
    return 0;
}

float Conversor_fahr_cels ( float fahr )
{
    return (fahr - 32.0) * (5.0 / 9.0); // retorna o valor em celsius
}
