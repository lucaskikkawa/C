#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura,peso,imc;
    //printf("Digite a sua altura e seu peso: \n");
    scanf("%f %f",&altura,&peso);
    imc = peso/(altura*altura);
    if (imc >= 40.0){
        printf("O seu IMC eh: %.2f\n",imc);
        printf("A Classificacao eh: Obesidade Grau III!");
        }
    else if (imc < 40.0 && imc >= 35.0){
            printf("O seu IMC eh: %.2f\n",imc);
            printf("A Classificacao eh: Obesidade Grau II!");
        }
        else if (imc < 35.0 && imc >= 30.0) { 
                printf("O seu IMC eh: %.2f\n",imc);
                printf("A Classificacao eh: Obesidade Grau I!");
            }
            else if (imc < 30.0 && imc >= 25.0){
                    printf("O seu IMC eh: %.2f\n",imc);
                    printf("A Classificacao eh: Sobrepeso!");
                }
                else if (imc < 25.0 && imc >= 18.6){
                        printf("O seu IMC eh: %.2f\n",imc);
                        printf("A Classificacao eh: Normal!");
                    }
                    else if (imc <= 18.5){
                            printf("O seu IMC eh: %.2f\n",imc);
                            printf("A Classificacao eh: Abaixo do Peso!");
                        }
    
}