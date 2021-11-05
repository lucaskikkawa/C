#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int ler_num ( int v[], int tam, int v_par[], int v_impar[], int *cont_par, int *cont_impar );
int imprimir_num ( int v[], int tam );
int remover_duplic ( int v[], int tam );
int swap ( int a, int b );
int BubbleSort(int v[], int tam);
int preencher_vetor_null(int v[],int tam);

// Separar o ler num para cada tipo de vetor. Não vai mais pegar os 3 de uma vez.
// Então, o que tu vai fazer : Ele vai ler o num e vai retornar
// o tamanho do vetor. Ai nesse caso, para o vetor_par, ele tem
// que ter um contador para tu poder criar um novo vetor par,
// sem os espaços extras.


// aparece um 8 extra no vetor de impar. Tem que corrigir isso
// Instalar o mingw-w64 para poder debugar e ver os vetores.

// usar ponteiros e j k (contadores de par e impar) para criar um novo vetor par e impar de tamanho
// certos, e passar os valores do vetor_par e vetor_impar antigo para eles. 

int preencher_vetor_null ( int v[], int tam )
{
    for ( int i = 0; i < tam; i++ )
    {
        v[i] = NULL;
    }
}


int ler_num ( int v[], int tam, int v_par[], int v_impar[], int *cont_par, int *cont_impar )
{
    //int j = 0, k = 0; // j iterator par, k iteraror impar
    for (int i = 0; i < tam; i++ )
    {

        printf("Digite um numero: \n");
        scanf("%d",&v[i]);
        //printf("%d \n",v[10]);
        if  ( v[i] % 2 == 0 ) // eh par
        {
            v_par[j] = v[i]; // adiciona o valor par para o v_par
            // lembrar de que para atribuir eh =, estava botando muito ==
            *cont_par++;
        }
        else // eh impar
        {
            v_impar[k] = v[i]; // adiciona o valor impara para o v_impar
            k++;
        }
    }

    return 0;
}


int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    return 0;
}
 
int BubbleSort(int v[], int tam)
{
    int i, j;
    for (i = 0; i < tam-1; i++)
    {    
     
    // Last i elements are already in place
        for (j = 0; j < tam-i-1; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
            }
        }
    }
    return 0;
}

int imprimir_num ( int v[], int tam )
{
    for ( int i = 0; i < tam; i++ )
    {
        if  ( v[i] != NULL )
        {
             printf("%d\n",v[i]);    
        } 
    }

    return 0;
}

int main()
{
    int menor,maior;
    int *cont_par = 0; 
    int *cont_impar = 0;
    int tam = 10; // todos os vetores vao ser tam 10
    int vetor[tam], vetor_par[tam], vetor_impar[tam];
    preencher_vetor_null(vetor,tam);
    preencher_vetor_null(vetor_par,tam);
    preencher_vetor_null(vetor_impar,tam);
    
    
    ler_num(vetor,tam,vetor_par,vetor_impar,&cont_par,&cont_impar); // adiciona tudo no vetor, e separa em vetor par e impar
    
    printf("%d %D \n",cont_par,cont_impar);
    /*
    BubbleSort(vetor,tam); // assim ja pego o maior e menor numero
    menor = vetor[0]; // primeiro valor = menor
    maior = vetor[tam-1]; // ultimo valor = maior

    imprimir_num(vetor_par,tam);
    imprimir_num(vetor_impar,tam);

    
    BubbleSort(vetor_par,tam);
    remover_duplic(vetor_par,tam);
    BubbleSort(vetor_impar,tam);
    remover_duplic(vetor_impar,tam);

    printf("Numeros pares: \n");
    imprimir_num(vetor_par,tam);

    printf("Numeros impares: \n");
    imprimir_num(vetor_impar,tam);
    
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
    */
    
    return 0;
}

int remover_duplic ( int v[], int tam )
{   
    // mudar todos os valores depois do ultimo numero para 100
    int j=0;
    int temp[tam];
    for ( int i = 0 ; i < tam - 1 ; i++ ) 
    {
        if  ( v[i] != v[i+1] ) // Vai ate mudar de numero. Enquanto for igual, nao armazena
        {
            temp[j] = v[i];
            j++;
        }
    }  

    // outro for para colocar os valores de temp em v.
    for ( int i = 0 ; i < tam ; i++ ) 
    {
        if  ( temp[i] >= 0 || temp[i] <= 10 )
        {
            v[i] = temp[i]; 
        }
    }


    return 0;

       
}