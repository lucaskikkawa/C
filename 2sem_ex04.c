#include <stdio.h>
#include <stdlib.h>

void Soma_2(int *menor){
    int a,b;
    int resultado;
    printf("Digite a e b:\n");
    scanf("%d %d",&a,&b);
    resultado = a+b;
    printf("(a+b) = %d\n",resultado);
    if(resultado <= *menor ){
        *menor = resultado; // troca
    }
}

void Soma_3(int *menor){
    int a,b,c;
    int resultado;
    printf("Digite a, b e c:\n");
    scanf("%d %d %d",&a,&b,&c);
    resultado = a+b+c;
    printf("(a+b+c) = %d\n",resultado);
    if(resultado <= *menor ){
        *menor = resultado; // troca
    }
}

void multiplicacao(int *menor){
    int a,b;
    int resultado;
    printf("Digite a e b:\n");
    scanf("%d %d",&a,&b);
    resultado = a*b;
    printf("(a*b) = %d\n",resultado);
    if(resultado <= *menor ){
        *menor = resultado; // troca
    }
}


void main()
{
    int saida=0; // false
    int operacao = 0;
    int menor_resultado = 1000000; 
    int first_time = 1;


        while (saida != 1){
            printf("Digite a operacao desejada: \n");
            scanf("%d",&operacao);
            if (operacao == 0 && first_time == 1){
                printf("Nenhum calculo foi realizado!");
                break;
            }
            else if (operacao == 1){
                Soma_2(&menor_resultado);

            }
            else if (operacao == 2){
                Soma_3(&menor_resultado);
            }
            else if (operacao == 3){
                multiplicacao(&menor_resultado);
            }
            else if (operacao == 0){
                saida = 1;
            }
            //if (first_time == 1){

            //}
            first_time = 0;
        }
    if (menor_resultado != 1000000){
    printf("Menor resultado: %d",menor_resultado);
    }
}

