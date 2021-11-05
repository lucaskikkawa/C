#include <stdio.h>
#include <stdlib.h>

/*
Edit meu:
Basicamente, o ponteiro é como se fosse uma lista com 2 posições.
A primeira posição representa o endereço de memoria da variavel que ele
esta apontando.
A segunda posição representa o valor do endereço de memoria que ele
está apontando.
[endereco_var,valor_endereco_var]
Para acessar o prmeiro, basta chamar o ponteiro normalmente.

E.G. 
int numero = 3;
int *pNumero = &numero; <- recebe o endereço. Tem que ter & "E" comercial.

printf("%p", pNumero); <- imprime o endereço.
printf("%i", *pNumero); <- imprime o valor do endereço de memoria.

-------------------------------------------------------------------------------------

Numa função, você tem que declarar o "*" no parametro e
tem que usar "*" toda hora que for utilizar o valor do endereco do ponteiro

E.G.

Ponteiro na funcao

void troca(int *p1, int *p2){
    int auxiliar;

    auxiliar = *p1; 
    *p1 = *p2; 
    *p2 = auxiliar;
}

troca(pNumero,pOutroNumero); <- nao precisa usar "*" no argumento

-------------------------------------------------------------------------------------

ITERACAO

*maior_10 = *maior_10 + 1;

*maior_10++; <- Isso nao funciona



-------------------------------------------------------------------------------------

Ponteiro Vetor

Nao precisa declarar o parametro com " * ", nem para passar como argumento.

E.G.

int tam = 3;
int vetor[tam];
int *pVetor = vetor;

Calcular_Soma_Coluna(pVetor,linha,coluna,matriz); <- sem " * "

int Calcular_Soma_Coluna ( int v[] ) <- sem " * " em int v[]


*/

int main()
{
    int numero = 3;
    int outroNumero = 10;
    int *pNumero = &numero;
    int *pOutroNumero = &outroNumero;
    int vetor[5] = {1,-1,30,47,0};
    int *pVetor = vetor;

    printf("Valor numero = %i\n", numero);
    printf("Endereco numero = %p\n\n", &numero);
    printf("Endereco do ponteiro pNumero = %p\n", pNumero);
    printf("Valor do endereco de pNumero = %i\n", *pNumero);

    *pNumero = *pNumero + 1;

    printf("\nValor numero = %i\n", numero);
    printf("Endereco numero = %p\n\n", &numero);
    printf("Endereco do ponteiro pNumero = %p\n", pNumero);
    printf("Valor do endereco de pNumero = %i\n", *pNumero);

    printf("\nEndereco vetor = %p\n", &vetor);
    printf("Endereco para onde o ponteiro aponta = %p\n\n", pVetor);
    printf("\nPrimeiro valor do vetor = %i\n", *pVetor);

    pVetor = pVetor + 3;
    printf("Quarto valor do vetor = %i\n\n", *pVetor);

    printf("Valor numero = %i\n",numero);
    printf("Valor outroNumero = %i\n\n",outroNumero);

    troca(pNumero,pOutroNumero);

    printf("Valor numero = %i\n",numero);
    printf("Valor outroNumero = %i\n\n",outroNumero);
    return 0;
}

// Exemplo funcao

void troca(int *p1, int *p2){
    int auxiliar;

    auxiliar = *p1; // auxliar = numero;
    *p1 = *p2; // numero = outroNumero;
    *p2 = auxiliar; // outroNumero = auxiliar;
}