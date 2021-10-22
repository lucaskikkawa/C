#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
int imprimir_num ( int v[], int tam );
int ler_num ( int v[], int tam, int v_par[], int v_impar[], int *cont_par, int *cont_impar );
int preencher_2_vetores (int v_1[], int tam_1, int v_2[]);
int BubbleSort(int v[], int *tam);
int swap(int *a, int *b);
int remover_duplic ( int v[], int *cont );


int preencher_2_vetores (int v_menor[], int tam_menor, int v_maior[])
{
    for ( int i = 0 ; i < tam_menor ; i++ )
    {
        v_menor[i] = v_maior[i];
    }
}

int imprimir_num ( int v[], int tam )
{
    for ( int i = 0; i < tam; i++ )
    {
        printf("%d\n",v[i]);     
    }

    return 0;
}

int ler_num ( int v[], int tam, int v_par[], int v_impar[], int *cont_par, int *cont_impar )
{
    int j = 0, k = 0; // j iterator par, k iteraror impar
    for (int i = 0; i < tam; i++ )
    {

        //printf("Digite um numero: \n");
        scanf("%d",&v[i]);
        //printf("%d \n",v[10]);
        if  ( v[i] % 2 == 0 ) // eh par
        {
            v_par[j] = v[i]; // adiciona o valor par para o v_par
            // lembrar de que para atribuir eh =, estava botando muito ==
            j++;
        }
        else // eh impar
        {
            v_impar[k] = v[i]; // adiciona o valor impara para o v_impar
            k++;
        }
    }
    *cont_par = j, *cont_impar = k;

    return 0;
}

int swap(int *a, int *b) // ok
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

int BubbleSort(int v[], int *tam) // ok
{
    int i, j;
    for (i = 0; i < *tam-1; i++)
    {    
     
    // Last i elements are already in place
        for (j = 0; j < *tam-i-1; j++)
        {
            if (v[j] > v[j+1])
            {
                swap(&v[j], &v[j+1]);
            }
        }
    }
    return 0;
}

int remover_duplic ( int v[], int *cont ) // vetor sem duplicata, mas com ultimas celulas com numeros aleatorios 
{   

    
    
    // mudar todos os valores depois do ultimo numero para 100
    int j=0;
    int tam_temp = *cont;
    int temp[tam_temp];
    for ( int i = 0 ; i < *cont ; i++ ) 
    {
        if  ( v[i] != v[i+1] ) // Vai ate mudar de numero. Enquanto for igual, nao armazena
        {
            temp[j] = v[i];
            j++;
        }
    }
    //*cont = j; // j = tamanho do vetor sem duplicata  

    // outro for para colocar os valores de temp em v.
    for ( int i = 0 ; i < *cont ; i++ ) 
    {
        v[i] = temp[i]; 
    }
    *cont = j; // j = tamanho do vetor sem duplicata

    // Eu tenho que mudar o vetor original

    return 0;

       
}

int main()
{
    int menor,maior;
    int tam = 10;
    int Cont_Par = 0,Cont_Impar = 0;
    int Vetor[tam],Vetor_Par[tam],Vetor_Impar[tam];

    //declaracao ponteiros
    //int *pVetor = Vetor;
    //int *pVetor_Par = Vetor_Par;
    //int *pVetor_Impar = Vetor_Impar;
    int *pCont_Par = &Cont_Par, *pCont_Impar = &Cont_Impar;
    int *ptam = &tam;

    ler_num(Vetor,tam,Vetor_Par,Vetor_Impar,pCont_Par,pCont_Impar);
    BubbleSort(Vetor,ptam);
    menor = Vetor[0], maior = Vetor[tam-1];
    
    int Novo_Vetor_Par[*pCont_Par], Novo_Vetor_Impar[*pCont_Impar];
    preencher_2_vetores(Novo_Vetor_Par,*pCont_Par,Vetor_Par);
    //BubbleSort(Novo_Vetor_Par,pCont_Par);
    preencher_2_vetores(Novo_Vetor_Impar,*pCont_Impar,Vetor_Impar);
    //BubbleSort(Novo_Vetor_Impar,pCont_Impar);
    /*
    printf(" \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf(" \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    printf(" \n");
    */

    remover_duplic(Novo_Vetor_Par,pCont_Par);
    remover_duplic(Novo_Vetor_Impar,pCont_Impar);

    printf("Numeros pares: \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf("Numeros impares: \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    printf("Maior: %d \n",maior);
    printf("Menor: %d \n",menor);

    

    //printf("%i %i \n",*pCont_Par,*pCont_Impar);

    /*
    printf(" \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf(" \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    printf(" \n");
    */

    //printf("%i %i \n",*pCont_Par,*pCont_Impar);

    //int sem_duplic_vetor_par[*pCont_Par];
    //int sem_duplic_vetor_impar[*pCont_Impar];

    //printf("%i %i \n",*pCont_Par,*pCont_Impar);

    /*
    preencher_2_vetores(sem_duplic_vetor_par,*pCont_Par,Novo_Vetor_Par);
    preencher_2_vetores(sem_duplic_vetor_impar,*pCont_Impar,Novo_Vetor_Impar);

    printf(" \n");
    imprimir_num(sem_duplic_vetor_par,*pCont_Par);
    printf(" \n");
    imprimir_num(sem_duplic_vetor_impar,*pCont_Impar);
    printf(" \n");
    */

    /*
    printf(" \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf(" \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    printf(" \n");
    remover_duplic(Novo_Vetor_Par,*pCont_Par);
    remover_duplic(Novo_Vetor_Impar,*pCont_Impar);
    printf(" \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf(" \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    */

    /*
    printf(" \n");
    imprimir_num(Vetor_Par,tam);
    printf(" \n");
    imprimir_num(Novo_Vetor_Par,*pCont_Par);
    printf(" \n");
    imprimir_num(Vetor_Impar,tam);
    printf(" \n");
    imprimir_num(Novo_Vetor_Impar,*pCont_Impar);
    */

    
    
    
    
    
    //printf("%i %i \n",*pCont_Par,*pCont_Impar);




    
    return 0;
}