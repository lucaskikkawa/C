// matriz geral
int Preencher_Matriz ( int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            scanf("%i",&m[i][j]);
        }  
    }
    return 0;
}

// matriz geral
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] )
{
    for ( int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            printf("%i ",m[i][j]);
        }
        printf("\n");    
    }

    return 0;
}

// vetor geral
int Preencher_Vetor ( int tam, int v[tam] )
{
    for (int i = 0; i < tam; i++ )
    {
        scanf("%i",&v[i]);
    }
    
    return 0;
}

// vetor geral
int Imprimir_Vetor ( int tam, int v[tam] )
{
    for ( int i = 0; i < tam; i++ )
    {
        printf("%i ",v[i]);    
    }
    printf("\n");

    return 0;
}

//Vetor ultima posicao ateh primeira
int Imprimir_Vetor_Ultima_Primeira ( int tam, int v[tam] )
{
    for ( int i = tam - 1; i >= 0; i-- )
    {
        printf("%i ",v[i]);    
    }
    printf("\n");

    return 0;
}

// matriz geral
int Imprimir_Matriz ( int linha, int coluna, int m[linha][coluna] )
{
    for ( int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            printf("%i ",m[i][j]);
        }
        printf("\n");    
    }

    return 0;
}

int Preencher_Matriz_0 ( int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            m[i][j] = 0;
        }  
    }
    return 0;
}

// vetor geral
int Preencher_Vetor ( int tam, int v[tam] )
{
    for (int i = 0; i < tam; i++ )
    {
        scanf("%i",&v[i]);
    }
    
    return 0;
}

int Preencher_Matriz_0_Diagonal_1 ( int linha, int coluna, int m[linha][coluna] )
{
    for (int i = 0; i < linha; i++ )
    {
        for ( int j = 0 ; j < coluna ; j++ )
        {
            if  (  i == j )
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }
        }  
    }
    return 0;
}



int Calcular_Soma_Coluna ( int v[], int linha, int coluna, 
int m[linha][coluna] )
{   // percorre primeiro uma coluna, depois muda de coluna
    int soma_coluna = 0;
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            soma_coluna += m[i][j];
        }

        v[j] = soma_coluna;
        soma_coluna = 0; // reset somatorio    
    }

    return 0;
}

int Calcular_Soma_Abaixo_Diag_Princ ( int *soma, int linha, int coluna, 
int m[linha][coluna] )
{   
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            if  ( i > j )
            {
                *soma += m[i][j];
            }
        }

    }

    return 0;
}

int Calcular_Soma_Acima_Diag_Princ ( int *soma, int linha, int coluna, 
int m[linha][coluna] )
{   
    for ( int j = 0 ; j < coluna ; j++ ) 
    {
        for ( int i = 0; i < linha; i++ )
        {
            if  ( j > i )
            {
                *soma += m[i][j];
            }
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

int BubbleSort_2D( int linha, int coluna, int m[linha][coluna])
{
    for (int i = 0; i < (linha * coluna); ++i) {
        for (int j = 0; j < (linha * coluna) - 1; ++j) {
            int lin_atual = j / coluna; // linha atual
            int col_atual = j % coluna; // coluna atual
            int prox_lin = (j + 1) / coluna; // proxima linha
            int prox_col = (j + 1) % coluna; // proxima coluna

            if ( m[lin_atual][col_atual] > m[prox_lin][prox_col])
                {
                swap(m[lin_atual][col_atual],m[prox_lin][prox_col);
                }
        }
    }
}

int BubbleSort_1D(int v[], int *tam) // ponteiro
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
